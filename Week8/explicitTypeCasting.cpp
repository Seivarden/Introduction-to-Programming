#include <iostream>
using namespace std;

int main() {
    // Explicit typecasting is controlled by the programmer or indicated by the program.
    // Implicit typecasting is done by the compiling, by chopping off some values or moving them around.
    // For typecasting to work correctly, it must be smaller value converted to larger one.
    // Larger to smaller leads to data loss.

    double myNum = 15.5; // Initialize and double variable
    /* Create new integer variable and explicitly cast the double to int*/
    int myNewNum = int(myNum);
    int myNewNum2 = (int)myNum;

    cout<< myNewNum << endl; // Output the new integer variable
    cout << myNewNum2 << endl; 
}