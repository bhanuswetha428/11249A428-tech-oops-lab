Aim:
To illustrate the concept of classes and objects in C++ by implementing member functions defined both inside and outside the class.
  Algorithm:
Start the program.
Create a class (e.g., Student) with:
Data members (like name, roll, marks)
Member functions (some defined inside, some outside the class).
Define one member function inside the class (e.g., getData()).Create an object of the class in the main() function.
Use the object to call the member functions.
Display the student details.
Stop the program.
Code:
#include <iostream>
using namespace std;
class Student {
private:
    string name;
    int roll;
    float marks;
public:
    void getData() {
        cout << "Enter Name: ";
        cin >> name;
        cout << "Enter Roll Number: ";
        cin >> roll;
        cout << "Enter Marks: ";
        cin >> marks;
    }
    void displayData();
};
void Student::displayData() {
    cout << "\n--- Student Details ---\n";
    cout << "Name: " << name << endl;
    cout << "Roll Number: " << roll << endl;
    cout << "Marks: " << marks << endl;
}
int main() {
    Student s1;     
    s1.getData();    
    s1.displayData(); 
    return 0;
}
SAMPLE OUTPUT:
Enter Name: Rahul
Enter Roll Number: 101
Enter Marks: 89.5
--- Student Details ---
Name: Rahul
Roll Number: 101
Marks: 89.5
  Result:
The program successfully illustrates the concept of classes and objects in C++.
It shows how member functions can be defined both inside and outside the class using the scope resolution operator (::).
