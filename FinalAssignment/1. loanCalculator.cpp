/*
    Rene Mogaka - 193210
    
*/

#include <iostream>
using namespace std;

bool reneLoanCalculator() {
    // Computes whether customer is qualified for a loan.
    string firstName;
    int age, accountAge, creditRating;
    float bankBalance; 
    bool approvedStatus = 0;

    cout << "*********Hello customer!*********" << endl;
    cout << "----------Welcome to the loan portal.----------" << endl;
    cout << "----------Enter your details-----------" << endl;
    cout << "Enter your first name: ";
    cin >> firstName;
    cout << "Enter your age: ";
    cin >> age;

    cout << "*********Financial information*********" << endl;
    cout << "Bank balance: ";
    cin >> bankBalance;
    cout << "CRB Rating: ";
    cin >> creditRating;
    cout << "Account age (in months): ";
    cin >> accountAge;

    
    if (age >= 22 && bankBalance >= 50000 && creditRating >= 300 && accountAge >= 6) {
        approvedStatus=1;
        cout << "You are qualified for a loan.";
    } else {
        cout << "You do not meet all the conditions for a loan.";
    }

    return approvedStatus;
}

int main() {
    reneLoanCalculator();

    return 0;
}