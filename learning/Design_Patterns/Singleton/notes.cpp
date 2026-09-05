/*

Singleton Design Pattern — Interview Notes
1. What is Singleton Design Pattern?

Definition:
    Singleton is a creational design pattern that ensures a class has only one instance and provides a global access point to that instance.

Normal class
    A normal class can create multiple objects:

singleton obj1;
singleton obj2;
singleton obj3;

So:

obj1 → Object 1
obj2 → Object 2
obj3 → Object 3

Singleton
Only one object is allowed:

ptr1 ──┐
       ├──→ Singleton Object
ptr2 ──┘

ptr1 and ptr2 point to the same object.

2. Private Constructor
    We make the constructor private:

class singleton
{
private:
    singleton()
    {
        cout << "Constructor called";
    }
};

Why?
If the constructor were public:

singleton obj;

Anyone could create objects.

By making it private:

singleton obj;   // ❌ Not allowed

we prevent direct object creation from outside the class.


Interview line:
    "I make the constructor private so that objects cannot be created directly from outside the class."



3. Static getInstance()
    Since the constructor is private, we need a way to access/create the Singleton object.

So we provide:

public:
    static singleton* getInstance();
Why public?

So outside code can call it:

singleton::getInstance();
Why static?

Because we need to call getInstance() without creating an object first.

singleton::getInstance();

A static member belongs to the class rather than a particular object.

4. Static Instance Pointer

We create:

static singleton* instance;

This pointer stores the address of our Singleton object.

Initially:

singleton* singleton::instance = nullptr;

So initially:

instance → nullptr

After object creation:

instance ──→ Singleton Object
Why static?

We want one shared instance pointer associated with the class, rather than a separate instance pointer for every object.

5. Lazy Initialization

Our basic Singleton implementation:

static singleton* getInstance()
{
    if (instance == nullptr)
    {
        instance = new singleton();
    }

    return instance;
}

This is called Lazy Initialization.

Why?

The object is created only when getInstance() is called for the first time.

First call:
instance == nullptr
       ↓
Create object
       ↓
Store address
       ↓
Return object
Second call:
instance != nullptr
       ↓
Don't create object
       ↓
Return existing object

Example:

singleton* ptr1 = singleton::getInstance();
singleton* ptr2 = singleton::getInstance();

Both point to the same object:

ptr1 ──┐
       ├──→ Object
ptr2 ──┘

Therefore:

cout << (ptr1 == ptr2);

Output:

1
6. Why Do We Need Thread Safety?

The basic Singleton implementation is not thread-safe.

Suppose two threads:

T1
T2

reach this code at approximately the same time:

if (instance == nullptr)
{
    instance = new singleton();
}

Both may see:

instance == nullptr

Then:

T1 → creates Object 1
T2 → creates Object 2

Now we have two objects, which breaks the Singleton guarantee.

This is a race condition.

7. Mutex

To protect the object creation, we can use a mutex:

static mutex mtx;

Then:

lock_guard<mutex> lock(mtx);

if (instance == nullptr)
{
    instance = new singleton();
}

The mutex ensures that only one thread at a time enters the critical section.

Example:
T1 → lock → check → create → unlock
                         ↓
T2 → waits ──────────────┘
      ↓
    lock
      ↓
 check instance
      ↓
already exists
      ↓
return same object
Critical Section

The critical section is:

if (instance == nullptr)
{
    instance = new singleton();
}

because this is the part that must not be executed by multiple threads simultaneously.

8. lock_guard

We used:

lock_guard<mutex> lock(mtx);

lock_guard follows RAII.

When lock_guard is created:

mutex → locked

When it goes out of scope:

mutex → automatically unlocked

So we don't manually need:

mtx.lock();
mtx.unlock();
Interview line:

"lock_guard provides automatic mutex management using RAII. It locks the mutex when constructed and unlocks it when it goes out of scope."

9. Problem With Locking Every Time

With the mutex version:

static singleton* getInstance()
{
    lock_guard<mutex> lock(mtx);

    if (instance == nullptr)
    {
        instance = new singleton();
    }

    return instance;
}

Every call acquires the mutex.

Even after the Singleton has already been created:

getInstance()
      ↓
lock
      ↓
check
      ↓
unlock
      ↓
return

The locking/unlocking operation has overhead.

So we try to reduce unnecessary locking.

10. Double-Checked Locking

We check instance before locking and again after locking.

static singleton* getInstance()
{
    if (instance == nullptr)
    {
        lock_guard<mutex> lock(mtx);

        if (instance == nullptr)
        {
            instance = new singleton();
        }
    }

    return instance;
}

There are two checks.

First check
if (instance == nullptr)

Purpose:

Avoid acquiring the mutex when the object has already been created.

Second check
if (instance == nullptr)

Purpose:

Ensure another thread hasn't already created the object while this thread was waiting for the mutex.

Why do we need the second check?

Suppose:

T1 → first check → nullptr
T2 → first check → nullptr
T3 → first check → nullptr

T1 gets the mutex:

T1 → lock → second check → nullptr → create object → unlock

Then T2 gets the mutex.

If T2 didn't perform the second check, it could create another object.

So:

First check
    ↓
Avoid unnecessary locking

Second check
    ↓
Ensure only one object is created
⚠️ Important

The classic raw-pointer double-checked locking implementation has C++ memory-ordering concerns and shouldn't be presented as a universally safe modern-C++ implementation.

For your interview, know the concept and reason behind it. Since we're intentionally skipping Meyers Singleton for now, don't go deeper tonight.

11. Eager Initialization

Another way to create Singleton is:

singleton* singleton::instance = new singleton();

Here the object is created during static initialization, before main() executes.

Therefore:

static singleton* getInstance()
{
    return instance;
}

There is no need for:

if (instance == nullptr)

because the object has already been created.

12. Lazy vs Eager Initialization
Lazy	Eager
Object created when first requested	Object created during initialization
Uses nullptr check	No nullptr check needed
Doesn't create object if never used	Object created even if never used
Better when creation is expensive and object may not be needed	Good when object is lightweight or definitely needed
Interview answer:

"Eager initialization creates the Singleton instance during static initialization, before it is requested. Its advantage is simplicity, while its disadvantage is that resources are consumed even if the object is never used."

13. Why Don't We Delete ptr1 and ptr2?

Suppose:

singleton* ptr1 = singleton::getInstance();
singleton* ptr2 = singleton::getInstance();

Both point to the same object:

ptr1 ──┐
       ├──→ Singleton Object
ptr2 ──┘

They are pointers, not separate objects.

If we do:

delete ptr1;

the Singleton object is destroyed.

Then:

delete ptr2;

tries to delete the same object again.

That's undefined behavior.

Important correction

Don't say:

"ptr1 and ptr2 don't hold the object."

Say:

"ptr1 and ptr2 hold the address of the same Singleton object."

14. Complete Basic Singleton Code

This is the basic version you've learned:

#include <iostream>
using namespace std;

class singleton
{
private:
    static singleton* instance;

    singleton()
    {
        cout << "Default constructor called" << endl;
    }

public:
    static singleton* getInstance()
    {
        if (instance == nullptr)
        {
            instance = new singleton();
        }

        return instance;
    }
};

singleton* singleton::instance = nullptr;

int main()
{
    singleton* ptr1 = singleton::getInstance();
    singleton* ptr2 = singleton::getInstance();

    cout << (ptr1 == ptr2) << endl;
}

Output:

Default constructor called
1

Constructor is called only once, and both pointers refer to the same object.

⭐ 15. Singleton — 30-Second Interview Answer

If the interviewer simply asks:

"Explain Singleton Design Pattern."

Say:

"Singleton is a creational design pattern that ensures a class has only one instance and provides a global access point to that instance. To achieve this, I make the constructor private so objects cannot be created directly from outside. I maintain a static pointer to store the instance and provide a public static getInstance() method. On the first call, if the pointer is null, I create the object and store its address. On subsequent calls, I return the existing instance instead of creating another object."

If they ask about multithreading:

"The basic lazy implementation is not thread-safe because two threads can simultaneously observe a null instance and create two objects. We can use a mutex to protect the critical section. Double-checked locking can reduce unnecessary locking after the instance has already been created."

🧠 What you actually need to remember tomorrow

Don't memorize the whole page. Remember this flow:

Private Constructor

↓

Static Instance

↓

Static getInstance()

↓

Lazy Initialization

↓

Multithreading → Race Condition

↓

Mutex

↓

Locking overhead

↓

Double-Checked Locking

↓

Eager Initialization


*/