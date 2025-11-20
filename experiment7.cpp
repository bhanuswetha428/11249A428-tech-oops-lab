Aim:
To illustrate the use of arrays of objects in C++ with student name and roll number.

 Algorithm:
Start the program.
Create a class Student with data members: name and rollNumber.
Define member functions:
getData() to input student details.
displayData() to display student details.
Create an array of objects.
Use a loop to input data for each student.
Use a loop to display data for each student.
Stop the program.

 C++ Program:
#include <iostream>
using namespace std;
class Student {
private:
    string name;
    int rollNumber;
public:
    void getData() {
        cout << "Enter Student Name: ";
        cin >> name;
        cout << "Enter Roll Number: ";
        cin >> rollNumber;
    }
    void displayData() {
        cout << "Student Name: " << name << ", Roll Number: " << rollNumber << endl;
    }
};
int main() {
    const int n = 3;        
    Student students[n];    
    for(int i = 0; i < n; i++) {
        cout << "\nEnter details for student " << i+1 << ":" << endl;
        students[i].getData();
    }
    cout << "\n--- Student Details ---" << endl;
    for(int i = 0; i < n; i++) {
        students[i].displayData();
    }
    return 0;
}

 Sample Output:
Student Name: Rahul, Roll Number: 101
Student Name: Priya, Roll Number: 102
Student Name: Aman, Roll Number: 103

 Result:
   The concept of illustrating the use of array of objects is successfully completed.
