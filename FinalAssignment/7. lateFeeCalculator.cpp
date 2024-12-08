/*
    René Mogaka
    193210
*/

#include <iostream>
using namespace std;

int main() {
    // Program calculates late fee for book borrowed from library.
    char type;
    string borrowerName, bookTitle;
    int daysPastDue, bookType;
    float totalLateFee;

    // Prompt user for input
    cout << "Enter your name: ";
    getline(cin, borrowerName);

    cout << "Enter book title: ";
    getline(cin, bookTitle);

    cout << "Enter book type" << endl;
    cout << "1. Regular" << endl;
    cout << "2. Reference" << endl;
    cout << "3. Children" << endl;
    cout << "Enter the appropriate number for the type: ";
    cin >> bookType;

    cout << "How many days ago was the book due? " << endl;
    cout << "Enter days: ";
    cin >> daysPastDue;

    if (daysPastDue >= 0) {
        if (bookType = 1) {
            if (daysPastDue <= 7 ) {
                totalLateFee = 100.00;
            } else if (daysPastDue <= 14) {
                totalLateFee = 200.00;
            } else {
                totalLateFee = 300.00;
            }
        } else if (bookType = 2) {
            if (daysPastDue <= 7 ) {
                totalLateFee = 400.00;
            } else if (daysPastDue <= 14) {
                totalLateFee = 800.00;
            } else {
                totalLateFee = 1200.00;
            }
        } else if (bookType = 2) {
            if (daysPastDue <= 7 ) {
                totalLateFee = 50.00;
            } else if (daysPastDue <= 14) {
                totalLateFee = 100.00;
            } else {
                totalLateFee = 150.00;
            }
        }
        cout << "Total Fine: " << totalLateFee;
    } else {
        cout << "There is no fine. Please return the book before it is due.";
    }
} 