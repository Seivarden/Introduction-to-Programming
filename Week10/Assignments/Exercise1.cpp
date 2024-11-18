#include <iostream>

using namespace std;

int main() {
    /*
        Ex 1: Simple program which checks
        if customer is qualified for a loan
    */
    string firstName, lastName; 
    int age, creditRating, accountAge;
    float bankBalance;
    bool approvedStatus = 0;

    cout << "---CUSTOMER INFORMATION---" << endl;
    cout << "First name: ";
    cin >> firstName;

    cout << "Last name: ";
    cin >> lastName;

    cout << "Age: ";
    cin >> age;

    cout << "Bank balance: ";
    cin >> bankBalance;

    cout << "CRB rating: ";
    cin >> creditRating;

    cout << "Account age (in months): ";
    cin >> accountAge;

    if (age > 22 && bankBalance > 50000 && creditRating >= 300 && accountAge >= 6) {
        approvedStatus = 1;
    }

    if (approvedStatus == 1) {
        cout << "Loan approved";
    } else {
        cout << "Loan declined.";
    }
}
