Experiment No: 23
AIM:
To implement signal (interrupt) handling in C++.
--------------------------------------------
THEORY:
Signal handling allows a program to catch asynchronous events or interrupts,
such as Ctrl+C or termination requests. The signal() function in C++
is used to define a handler that executes specific code when the signal occurs.
--------------------------------------------
ALGORITHM:
1. Include <csignal> and <iostream> headers.
2. Define a signal handler function.
3. Register the handler using signal().
4. Use an infinite loop to simulate running process.
5. Press Ctrl+C to trigger the interrupt.
--------------------------------------------
CODE:
*/

#include <iostream>
#include <csignal>
#include <unistd.h>
using namespace std;

void signalHandler(int signum) {
    cout << "\nInterrupt signal (" << signum << ") received.\n";
    cout << "Exiting safely..." << endl;
    exit(signum);
}

int main() {
    signal(SIGINT, signalHandler);
    while (1) {
        cout << "Running program... Press Ctrl+C to stop.\n";
        sleep(2);
    }
    return 0;
}

/*
--------------------------------------------
SAMPLE OUTPUT:
Running program... Press Ctrl+C to stop.
^C
Interrupt signal (2) received.
Exiting safely...
--------------------------------------------
RESULT:
Thus, signal (interrupt) handling was successfully implemented in C++.
--------------------------------------------
*/
