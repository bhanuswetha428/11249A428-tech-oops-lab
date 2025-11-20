Aim:
To demonstrate passing an object by value to a function in C++.

 Algorithm:
Start the program.
Create a class (e.g., Number) with a data member (like value).
Define a member function to set the value.
Define a function that takes an object as argument (by value) and modifies its data.
Create an object in main().
Display the value before the function call.
Call the function with the object as argument.
Display the value inside the function.Display the value after the function call to show the original object is unchanged.
Stop the program.

 C++ Program:
#include <iostream>
using namespace std;
class Number {
private:
    int value;
public:
    void setValue(int v) {
        value = v;
    }
    int getValue() {
        return value;
    }
    void modify(Number n) {
        n.value = 100;  
        cout << "Inside function (by value): " << n.value << endl;
    }
};
int main() {
    Number num;
    num.setValue(10);
    cout << "Original object before call: " << num.getValue() << endl;
    num.modify(num); 
    cout << "Original object after call: " << num.getValue() << endl;
    return 0;
}

 Output:
Original object before call: 10
Inside function (by value): 100
Original object after call: 10

 Result:
The program demonstrates passing an object by value.
Inside the function, a copy of the object is created and modified.
The original object remains unchanged, which is why the value is still 10 after the function call.
This shows that pass-by-value protects the original object from changes made inside the function.
