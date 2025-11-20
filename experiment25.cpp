Experiment No: 25
AIM:
To demonstrate basic web programming using C++ (CGI scripting).
--------------------------------------------
THEORY:
C++ can be used to create simple web-based applications using 
Common Gateway Interface (CGI). The program outputs HTML code 
that can be rendered by a web browser.
--------------------------------------------
ALGORITHM:
1. Include <iostream> header.
2. Print HTTP content type header.
3. Output HTML tags using cout.
--------------------------------------------
CODE:
*/

#include <iostream>
using namespace std;

int main() {
    cout << "Content-type:text/html\n\n";
    cout << "<html><body>";
    cout << "<h2>Welcome to C++ Web Programming!</h2>";
    cout << "<p>This is a simple CGI program in C++.</p>";
    cout << "</body></html>";
    return 0;
}

/*
--------------------------------------------
SAMPLE OUTPUT (in browser):
Welcome to C++ Web Programming!
This is a simple CGI program in C++.
--------------------------------------------
RESULT:
Thus, a simple web-based program using C++ CGI was successfully executed.
--------------------------------------------
*/
