// Upcasting and Downcasting

#include <iostream>
using namespace std;


class Vehicle
{
public:
    // Vehicle is polymorphic because it has a virtual function.
    // This is required for runtime downcasting using dynamic_cast.
    virtual void start()
    {
        cout << "Vehicle start" << endl;
    }
};


class Car : public Vehicle
{
public:
    void car_start()
    {
        cout << "Car starting" << endl;
    }
};


int main()
{
    /*
    ============================================================
                        1. UPCASTING
    ============================================================

    Upcasting means:

        Derived class pointer/object
                    ↓
        Base class pointer/reference

    Example:

        Car* → Vehicle*

    Upcasting is generally safe.
    */


    // Pointer type  → Vehicle*
    // Actual object → Car
    Vehicle* ptr = new Car();

    // We can access Vehicle's methods through a Vehicle*.
    ptr->start();

    /*
    We cannot access Car-specific methods through a Vehicle*.

        ptr->car_start();  // ERROR

    Why?

    Because the pointer type is Vehicle*.

    The compiler checks accessible members based on the POINTER TYPE.
    Vehicle does not contain car_start().

    Even though the actual object is Car, we cannot directly access
    Car-specific methods through a Vehicle*.
    */


    /*
    ============================================================
                        2. DOWNCASTING
    ============================================================

    Why do we need downcasting?

    Suppose we have:

        Vehicle* ptr = new Car();

    The actual object is Car, but through Vehicle* we cannot access:

        ptr->car_start();

    Therefore, if we need Car-specific functionality, we convert:

        Vehicle* → Car*

    This is called DOWNCASTING.
    */


    /*
    ============================================================
              3. DOWNCASTING USING static_cast
    ============================================================

    static_cast does NOT check the actual object type at runtime.

    We should use it only when we are sure about the actual object type.
    */


    // Pointer type  → Vehicle*
    // Actual object → Car
    Vehicle* ptr1 = new Car();

    // Downcasting: Vehicle* → Car*
    Car* carPtr1 = static_cast<Car*>(ptr1);

    /*
    carPtr1 can access both:

        1. Car's own method:
           car_start()

        2. Vehicle's inherited method:
           start()

    Why?

    Because the actual object is really a Car.

    A Car object conceptually contains:

        Car object
        ┌────────────────────────┐
        │ Vehicle part           │
        │ start()                │
        ├────────────────────────┤
        │ Car-specific part      │
        │ car_start()            │
        └────────────────────────┘
    */

    carPtr1->car_start();  // Safe
    carPtr1->start();      // Safe


    /*
    ------------------------------------------------------------
                  Unsafe static_cast example
    ------------------------------------------------------------

    Now the actual object is only Vehicle.
    */


    // Pointer type  → Vehicle*
    // Actual object → Vehicle
    Vehicle* ptr2 = new Vehicle();

    // static_cast does NOT check the actual object type.
    // It only changes how the compiler treats the pointer.
    Car* carPtr2 = static_cast<Car*>(ptr2);

    /*
    After casting:

        Pointer type → Car*
        Actual object → Vehicle

    IMPORTANT:

    static_cast changes the POINTER TYPE.

        Vehicle* → Car*

    It does NOT change the actual object.

        Vehicle object → Car object   // NOT happening

    Therefore, carPtr2 does not really point to a Car object.

    Using carPtr2 as a valid Car pointer causes undefined behavior.

    The following calls are unsafe:

        carPtr2->start();
        carPtr2->car_start();

    Even if the program appears to work, it is still undefined behavior.
    */

    // carPtr2->start();       // Unsafe
    // carPtr2->car_start();   // Unsafe


    /*
    ============================================================
              4. DOWNCASTING USING dynamic_cast
    ============================================================

    Why dynamic_cast?

    static_cast does not check the actual object type.

    dynamic_cast checks the ACTUAL OBJECT TYPE at runtime.

    It asks:

        "Is this object actually a Car?"

    For dynamic_cast downcasting, the base class must be polymorphic.

    That means the base class must have at least one virtual function.

    In our example:

        virtual void start()

    makes Vehicle a polymorphic class.

    Alternatively, a virtual destructor can also make the class
    polymorphic:

        virtual ~Vehicle() = default;
    */


    /*
    ------------------------------------------------------------
                  Successful dynamic_cast
    ------------------------------------------------------------
    */


    // Pointer type  → Vehicle*
    // Actual object → Car
    Vehicle* ptr3 = new Car();

    ptr3->start();

    // Runtime check:
    // Is the actual object a Car?
    //
    // YES → dynamic_cast returns a valid Car*
    Car* carPtr3 = dynamic_cast<Car*>(ptr3);

    // Always check before using the result.
    if (carPtr3 != nullptr)
    {
        carPtr3->car_start();  // Safe
        carPtr3->start();      // Safe
    }
    else
    {
        cout << "Object is not a Car" << endl;
    }


    /*
    ------------------------------------------------------------
                    Failed dynamic_cast
    ------------------------------------------------------------
    */


    // Pointer type  → Vehicle*
    // Actual object → Vehicle
    Vehicle* ptr4 = new Vehicle();

    ptr4->start();

    // Runtime check:
    //
    // Is the actual object a Car?
    //
    // NO → dynamic_cast returns nullptr
    Car* carPtr4 = dynamic_cast<Car*>(ptr4);

    if (carPtr4 == nullptr)
    {
        cout << "Object is not a Car" << endl;
    }
    else
    {
        carPtr4->car_start();
    }


    /*
    ============================================================
                        FINAL SUMMARY
    ============================================================

    UPCASTING:

        Car* → Vehicle*

        Derived → Base

        Generally safe.

        Example:

            Vehicle* ptr = new Car();


    DOWNCASTING:

        Vehicle* → Car*

        Base → Derived

        Used when we need derived-class-specific functionality.


    static_cast:

        Vehicle* → Car*

        - Does NOT check actual object type at runtime.
        - Changes the pointer type, not the actual object.
        - Use only when you are sure about the actual object type.

        Safe:

            Vehicle* ptr = new Car();
            Car* carPtr = static_cast<Car*>(ptr);

        Unsafe:

            Vehicle* ptr = new Vehicle();
            Car* carPtr = static_cast<Car*>(ptr);

        Because the actual object is still Vehicle, not Car.


    dynamic_cast:

        Vehicle* → Car*

        - Checks the actual object type at runtime.
        - Base class must be polymorphic.
        - Requires at least one virtual function
          (or a virtual destructor).

        If the actual object is Car:

            dynamic_cast returns a valid Car*

        If the actual object is NOT Car:

            dynamic_cast returns nullptr

        Therefore, always check:

            if (carPtr != nullptr)
            {
                // Safe to use carPtr
            }


    GOLDEN RULE:

        The POINTER TYPE determines what members the compiler
        allows you to access.

        The ACTUAL OBJECT TYPE determines whether downcasting
        to that derived type is actually valid.
    */


    // Cleanup dynamically allocated memory.
    delete ptr;
    delete ptr1;
    delete ptr2;
    delete ptr3;
    delete ptr4;

    return 0;
}