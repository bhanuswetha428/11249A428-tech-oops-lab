--------------------------------------------
Experiment No: 12-B
AIM:
To implement a C++ program that demonstrates relational
operator overloading (==, !=, <) for string comparison.
--------------------------------------------
ALGORITHM:
1. Start the program.
2. Define a class named 'MyString' with:
   - A character pointer 'data' for storing string data.
   - An integer 'length' to store string length.
3. Create constructors to allocate memory dynamically and copy strings.
4. Overload relational operators:
   a) operator== : returns true if both strings are equal.
   b) operator!= : returns true if strings are not equal (uses operator==).
   c) operator<  : returns true if one string is lexicographically smaller.
5. In main(), create multiple string objects and compare them.
6. Display appropriate messages based on comparison results.
7. Stop the program.
--------------------------------------------
CODE:
*/
#include <iostream>
#include <cstring>
using namespace std;

class MyString {
private:
    char* data;
    int length;

public:
    // Default constructor
    MyString() {
        length = 0;
        data = new char[1];
        data[0] = '\0';
    }

    // Parameterized constructor
    MyString(const char* str) {
        length = strlen(str);
        data = new char[length + 1];
        strcpy(data, str);
    }

    // Copy constructor
    MyString(const MyString& other) {
        length = other.length;
        data = new char[length + 1];
        strcpy(data, other.data);
    }

    // Destructor
    ~MyString() {
        delete[] data;
    }

    // Relational operator overloading
    bool operator==(const MyString& other) const {
        return (strcmp(data, other.data) == 0);
    }

    bool operator!=(const MyString& other) const {
        return !(*this == other); // reuse operator==
    }

    bool operator<(const MyString& other) const {
        return (strcmp(data, other.data) < 0);
    }

    // Display function
    void display() const {
        cout << data;
    }
};

int main() {
    MyString str1("Apple");
    MyString str2("Banana");
    MyString str3("Apple");

    cout << "Comparing strings:\n";
    cout << "str1 = ";
    str1.display();
    cout << "\nstr2 = ";
    str2.display();
    cout << "\nstr3 = ";
    str3.display();
    cout << "\n\n";

    if (str1 == str3)
        cout << "str1 is equal to str3" << endl;
    else
        cout << "str1 is not equal to str3" << endl;

    if (str1 != str2)
        cout << "str1 is not equal to str2" << endl;
    else
        cout << "str1 is equal to str2" << endl;

    if (str1 < str2)
        cout << "str1 comes before str2 alphabetically" << endl;
    else
        cout << "str1 does not come before str2 alphabetically" << endl;

    return 0;
}

/*
--------------------------------------------
OUTPUT:
Comparing strings:
str1 = Apple
str2 = Banana
str3 = Apple

str1 is equal to str3
str1 is not equal to str2
str1 comes before str2 alphabetically
--------------------------------------------
RESULT:
Thus, the program to demonstrate relational operator overloading
(==, !=, <) for string comparison in C++ was successfully executed.
--------------------------------------------
*/
