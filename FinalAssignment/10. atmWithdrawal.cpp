/*
    Rene Mogaka
    193210
*/

#include <iostream>
using namespace std;

int main() {
    // ATM Program
    // Simulates withdrawal

    float bankBalance = 500000; // Hardcoded to simulate the amount currently in bank. 
    float transactionLimit = 100000;
    float withdrawalAmount;
    float amountWithdrawnToday;
    cout << "Welcome to the the ATM!" << endl;

    cout << "Enter the amount you wish to withdraw: Sh. ";
    cin >> withdrawalAmount; 

    if (withdrawalAmount <= 0) {   
        // Enters negative number
        cout << "Invalid amount. Please enter a positive number." << endl; 
    } else if (withdrawalAmount > bankBalance) {
        // Insufficient funds
        cout << "Insufficient funds. Your account balance is: Sh. " << bankBalance << endl;
    } else if (withdrawalAmount > transactionLimit) {
        // Exceeds transaction limit
        cout << "Your transaction limit of Sh. " << transactionLimit << " has been exceeeded." << endl;
    } else {
        bankBalance -= withdrawalAmount;
        
        cout << "Successfully withdrawn Sh." << withdrawalAmount << endl;
        cout << "New account balance: Sh. " << bankBalance << endl;
    }
    return 0;
}