#include <iostream>

using namespace std;

int main() {
    int a, b;

    cout << "Enter the first number: ";
    cin >> a;

    cout << "Enter the second number: ";
    cin >> b;

    // Comparison var store result 
    // 1 if a > b; -1 if a < b; 0 if both are equal
    int comparison = (a > b) ? 1 : (a < b) ? -1 : 0;  
    
    
    switch (comparison) {
        case 1: 
            cout << "The larger number is: " << a << endl; 
            break;
        case -1: 
            cout << "The larger number is: " << b << endl;
            break;
        case 0:
            cout << a << " and " << b << " are equal." << endl; 
            break;
        default:
            cout << "Unexpected error. Please try again" << endl;
            break;
    }
    return 0;
}