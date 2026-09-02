/*

            Encapsulation	                                                 Abstraction
1. Focuses on how data is protected/controlled	                     1. Focuses on what functionality is exposed
2. Achieved using private, protected, public, classes	             2. Commonly achieved using abstract classes & pure virtual functions
3. Hides/protects data and implementation	                         3. Hides unnecessary implementation details
4. Example: private int speed	                                     4. Example: virtual void start() = 0

Interview Answer

"Encapsulation is about bundling data and methods together and controlling access to them, mainly using access specifiers. Abstraction is about exposing only the essential functionality while hiding unnecessary implementation details. For example, in a Vehicle class, encapsulation can protect the speed variable, while abstraction can expose a start() interface without exposing how the engine starts."

Easy way to remember 

Encapsulation → "Protect/Control access"
Abstraction → "Show what, hide how"

 
*/