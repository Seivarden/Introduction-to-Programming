#include <iostream>
using namespace std;

int main() {
    // Prompt user for input
    float a, b;
    cout << "Enter one number: ";
    cin >> a;
    cout << "Enter another number: ";
    cin >> b;
    // Add
    cout << "Sum of " << a << " and " << b << " is: " <<  a + b << endl;
    // Multiply
    cout << "Product of " << a << " and " << b << " is: " <<  a * b << endl;
    // Subtract
    cout << "Difference of " << a << " and " << b << " is: " <<  a - b << endl;
    // Divide
    cout << "Division of " << a << " and " << b << " is: " <<  a / b << endl;
    return 0;
}