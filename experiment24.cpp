Experiment No: 24
AIM:
To demonstrate simple programs using the Standard Template Library (STL) in C++.
--------------------------------------------
THEORY:
The C++ Standard Template Library (STL) provides pre-defined data structures 
and algorithms like vectors, lists, stacks, and maps. These templates simplify 
data manipulation and improve code efficiency.
--------------------------------------------
ALGORITHM:
1. Include the <vector> and <algorithm> headers.
2. Create a vector and insert elements.
3. Sort and display the vector using STL functions.
--------------------------------------------
CODE:
*/

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    vector<int> nums = {5, 2, 9, 1, 7};

    cout << "Original vector: ";
    for (int n : nums) cout << n << " ";
    cout << endl;

    sort(nums.begin(), nums.end());
    cout << "Sorted vector: ";
    for (int n : nums) cout << n << " ";
    cout << endl;

    reverse(nums.begin(), nums.end());
    cout << "Reversed vector: ";
    for (int n : nums) cout << n << " ";
    cout << endl;

    return 0;
}

/*
--------------------------------------------
SAMPLE OUTPUT:
Original vector: 5 2 9 1 7
Sorted vector: 1 2 5 7 9
Reversed vector: 9 7 5 2 1
--------------------------------------------
RESULT:
Thus, simple STL operations such as sorting and reversing 
were successfully implemented in C++.
--------------------------------------------
*/
