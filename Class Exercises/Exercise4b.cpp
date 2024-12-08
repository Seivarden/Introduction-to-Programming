#include <iostream>
#include <iomanip> // Set number of decimal places -R
using namespace std;

int main() {
    int choice; // User selection
    double total = 0.0;

    // Display restaurant menu
    cout << "Welcome to Rene's Restaurant!" << endl;
    cout << "Select items from the menu below" << endl << endl;
    cout << "1. Fries - Sh. 399.99" << endl;
    cout << "2. Cheeseburger - Sh. 599.99" << endl;
    cout << "3. Pizza - Sh. 899.99" << endl;
    cout << "4. Salad - Sh. 349.99" << endl;
    cout << "5. Exit" << endl << endl;

    //Permanent loop until user exits
    while (true) {
        cout << "Enter your choice (1-5): ";
        cin >> choice;

        switch (choice) {
            case 1: 
                total += 399.99;
                cout << "You selected fries - Sh. 399.99" << endl;
                break;
            case 2: 
                total += 599.99;
                cout << "You selected cheeseburger - Sh. 599.99" << endl;
                break;
            case 3: 
                total += 399.99;
                cout << "You selected pizza - Sh. 899.99" << endl;
                break;
            case 4: 
                total += 349.99;
                cout << "You selected salad - Sh. 349.99" << endl;
                break;
            case 5:
                // Exit
                cout << "Your total bill is: Sh. " << total << setprecision(2) << endl;
                return 0; 
            default:
                cout << "Invalid choice! Please select a valid option." << endl;
        }
    }
}