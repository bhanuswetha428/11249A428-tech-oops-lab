Aim
To write a C++ program that calculates the total distance given in feet and inches and displays the result in feet and inches.

 Algorithm
Start the program.
Declare variables for two distances (feet and inches) and for the total distance.
Input the first distance (feet and inches).
Input the second distance (feet and inches).
Add the inches.
If the sum of inches ≥ 12, convert extra inches into feet.
Add the feet and include any extra feet from the inch conversion.
Display the total distance in feet and inches.
Stop the program.

 C++ Program
#include <iostream>
using namespace std;
int main() {
    int feet1, inches1, feet2, inches2;
    int totalFeet, totalInches;
    cout << "Enter first distance:\n";
    cout << "Feet: ";
    cin >> feet1;
    cout << "Inches: ";
    cin >> inches1;
    cout << "\nEnter second distance:\n";
    cout << "Feet: ";
    cin >> feet2;
    cout << "Inches: ";
    cin >> inches2;
    totalFeet = feet1 + feet2;
    totalInches = inches1 + inches2;
    if (totalInches >= 12) {
        totalFeet += totalInches / 12;
        totalInches = totalInches % 12;
    }
    cout << "\nTotal distance is " << totalFeet << " feet " << totalInches << " inches.\n";
    return 0;
}

 Sample Input & Output

Input:

Enter first distance:
Feet: 5
Inches: 8

Enter second distance:
Feet: 4
Inches: 7


Output:

Total distance is 10 feet 3 inches.

 Result

The program successfully adds two distances (in feet and inches) and displays the total distance in proper format (feet and inches).
