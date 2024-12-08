/*
    Rene Mogaka
    193210
*/

#include <iostream>
using namespace std;

int main() {
    // Program determines larger of two numbers
    // input by user
    int a, b;

    // Prompt input
    cout << "Enter two numbers: " << endl;
    cout << "Number 1: ";
    cin >> a;
    cout << "Number 2: ";
    cin >> b;

    // Ternary operator to store number 
    // if a > b, result = 1; if a < b, result = -1; if both are equal, result = 0
    int result = (a > b) ? 1 : (b > a) ? -1 : 0;

    switch (result) {
        case (1):
            cout << "The larger number is: " << a << endl;
            break;
        case (-1):
            cout << "The larger number is: " << b << endl;
            break;
        case (0):
            cout << "Both numbers are equal." << endl;
        default: 
            cout << "Invalid input." << endl;
            break;
    }
    return 0;
}