Experiment No: 26
AIM:
To demonstrate simple graphics programming in C++.
--------------------------------------------
THEORY:
Graphics programming in C++ allows drawing shapes, lines, 
and other visual elements using a graphics library (like graphics.h).
--------------------------------------------
ALGORITHM:
1. Include <graphics.h>.
2. Initialize the graphics mode.
3. Draw basic shapes (circle, line, rectangle).
4. Close the graphics mode.
--------------------------------------------
CODE:
*/

#include <graphics.h>
#include <conio.h>

int main() {
    int gd = DETECT, gm;
    initgraph(&gd, &gm, (char*)"");

    circle(200, 200, 50);
    rectangle(100, 100, 300, 300);
    line(100, 300, 300, 100);

    getch();
    closegraph();
    return 0;
}

/*
--------------------------------------------
SAMPLE OUTPUT:
A window opens displaying a circle, rectangle, and a diagonal line.
--------------------------------------------
RESULT:
Thus, simple graphics concepts in C++ were successfully demonstrated.
--------------------------------------------
*/
