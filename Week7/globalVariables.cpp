#include <iostream>
using namespace std;

// Global variable declaration and initialization
int globalVar = 30;
const int age = 25;  // Constant global variable
// Value will not change

void myFunction() {
    globalVar = 105;
    cout << "myFunction globalVar: " << globalVar;
}

int main() {
    cout << "Main globalVar: " << globalVar << endl;
    myFunction();

    cout << "New age: " << age;
    return 0;
}