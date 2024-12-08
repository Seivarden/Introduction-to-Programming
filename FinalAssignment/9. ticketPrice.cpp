/*
    Rene Mogaka
    193210
*/
#include <iostream>
using namespace std;

int main() {
    // Program calculates total ticket price for cinema
    // Uses age and type of movie as variables to determine final cost
    
    int movieType, customerAge;
    int ticketPrice; 

    cout << "Welcome to Cinema+ - Home of movies!" << endl;
    cout << "What kind of experience are you seeking?" << endl;
    cout << "1. Regular" << endl;
    cout << "1. IMAX" << endl;
    cout << "3. 3D" << endl;
    cout << "Enter: ";
    cin >> movieType;

    cout << "Enter your age: ";
    cin >> customerAge;

    if (customerAge >= 5 && customerAge <= 100) {
        if (movieType == 1) {
            if (customerAge <= 12) {
                ticketPrice = 500;
            } else if (customerAge <= 18) {
                ticketPrice = 800;
            } else {
                ticketPrice = 1000;
            }
        }
        if (movieType == 2) {
            if (customerAge <= 12) {
                ticketPrice = 700;
            } else if (customerAge <= 18) {
                ticketPrice = 1100;
            } else {
                ticketPrice = 1300;
            }
        }
        if (movieType == 3) {
            if (customerAge <= 12) {
                ticketPrice = 900;
            } else if (customerAge <= 18) {
                ticketPrice = 1200;
            } else {
                ticketPrice = 1500;
            }
        }
        cout << "Ticket price: " << ticketPrice << endl;
    } else {
        cout << "Sorry, cinema policy does not allow children under 5 years old.";
    }
}