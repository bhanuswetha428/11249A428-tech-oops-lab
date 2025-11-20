Aim:
To demonstrate the use of static data members and static member functions in C++.

 Algorithm:
Start the program.
Create a class (e.g., Car).
Declare a static data member to count the total number of cars.
Increment the static member in the constructor each time a new object is created.
Define a static member function to display the total number of cars.
Create multiple objects of the class.
Call the static function using the class name to display the total cars created.
Stop the program.

CO0DE:
#include <iostream>
using namespace std;
class Car {
private:
    string name;
    int model;
public:
    static int totalCars;
    Car(string n, int m) {
        name = n;
        model = m;
        totalCars++; 
    }
    static void displayTotalCars() {
        cout << "Total cars created: " << totalCars << endl;
    }
    void displayCar() {
        cout << "Car Name: " << name << ", Model: " << model << endl;
    }
};
int Car::totalCars = 0;
int main() {
    Car c1("Toyota", 2020);
    Car c2("Honda", 2021);
    Car c3("Ford", 2022);
    cout << "--- Car Details ---" << endl;
    c1.displayCar();
    c2.displayCar();
    c3.displayCar();
    cout << "\n--- Total Cars ---" << endl;
    Car::displayTotalCars(); 
    return 0;
}

OUTPUT:
Car Name: Toyota, Model: 2020
Car Name: Honda, Model: 2021
Car Name: Ford, Model: 2022
Total cars created: 3

RESULT:
The concept of use of static data members and static member functions is completed.
