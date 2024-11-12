// Preprocessor directives to include libraries mentioned
// Enables input and output
#include <iostream>

// Arithmetic equations
#include <cmath>

using namespace std;

// Declare main function
int main()
{
    // Initialize integer variable to -10
    int x = -10;

    // Returns absolute value of x 
    cout << "Absolute value of " << x << " is " << abs(x) << endl;

    // Initialize new variable to 25
    int y = 25;

    // Compute square root of 25
    cout << "The square root of " << y << " is " << sqrt(y) << endl;

    // Initialize variable z to 2
    int z = 2;

    // Compute logarithm of z
    cout << "The logarithm of " << z << " is " << log(z) << endl; 

    // Compute 2 raised to the power 3
    cout << "2^3 = " << pow(2, 3) << endl;
}