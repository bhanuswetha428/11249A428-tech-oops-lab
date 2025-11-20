Experiment No: 15
AIM:
To implement a C++ program that demonstrates
the concept of multilevel inheritance.
--------------------------------------------
THEORY:
Multilevel inheritance in C++ involves a chain of inheritance 
where a class is derived from another derived class. 
This creates a hierarchy that allows properties and behaviors 
to be passed down through multiple levels of classes.

For example:
    Grandparent → Parent → Child
Each derived class inherits all accessible members 
from its immediate base class, forming a multilevel structure.
--------------------------------------------
ALGORITHM:
1. Start the program.
2. Define a base class `Vehicle` with a function `start()`.
3. Define a derived class `Car` that inherits from `Vehicle`
   and adds a function `drive()`.
4. Define another class `SportsCar` that inherits from `Car`
   and adds a function `accelerate()`.
5. In the main() function:
   - Create an object of `SportsCar`.
   - Call all the inherited and new member functions to 
     demonstrate multilevel inheritance.
6. Stop the program.
--------------------------------------------
CODE:
*/

#include <iostream>
using namespace std;

class Vehicle {
public:
    void start() {
        cout << "Vehicle started." << endl;
    }
};

class Car : public Vehicle {
public:
    void drive() {
        cout << "Car is driving." << endl;
    }
};

class SportsCar : public Car {
public:
    void accelerate() {
        cout << "Sports car accelerating fast!" << endl;
    }
};

int main() {
    SportsCar mySportsCar;

    mySportsCar.start();      // Inherited from Vehicle
    mySportsCar.drive();      // Inherited from Car
    mySportsCar.accelerate(); // Specific to SportsCar

    return 0;
}

/*
--------------------------------------------
OUTPUT:
Vehicle started.
Car is driving.
Sports car accelerating fast!
--------------------------------------------
RESULT:
Thus, the program to demonstrate multilevel inheritance 
in C++ was successfully executed.
--------------------------------------------
*/
