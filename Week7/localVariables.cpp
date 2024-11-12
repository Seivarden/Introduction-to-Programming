#include <iostream>

using namespace std;

void myFunction() {
    // Function code block
    // Local variable declarations and initialization
    int localVar = 105;
    const int age = 25; // Constant local variable

    cout << "myFunction localVar: " << localVar << "\n";
}

int main() {
    // Function code block
    // Local variable declarations and initialization
    int localVar = 30;
    const int age = 25; // Constant local variable.

    cout << "Main localVar: " << localVar;
    myFunction();

    return 0;
}