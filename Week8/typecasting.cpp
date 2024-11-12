#include <iostream>
using namespace std;

int main() {
    // Implicit type conversion
    // Converting double to int
    double myNum = 15.5; // Initialize and double variable
    int myNewNum; // Create new integer variable
    myNewNum = myNum; // Assign double data type to integer
    cout << myNewNum << endl; // Output the new integer variable

    // Type conversion: Float to Double
    float myNum2 = 15.5234;
    double myNewNum2;
    myNewNum2 =  myNum2;
    cout << myNum2 << endl;

    // Boolean
    // Note how it automatically converts true and false to 1 and 0 respectively.
    // Also, any non-zero value assigned to bool variable will be converted to a 1
    // False will always be zero

    bool notTrue = false;
    bool isTrue = "hello";
    cout << notTrue << endl;
    cout << isTrue << endl;
}