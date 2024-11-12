#include <iostream>

using namespace std;

int main() {
    string firstName, lastName, fullName, favMeal, favMovie;

    // Prompt user for input
    cout << "Enter your first name: ";
    cin >> firstName;

    cout << "Enter your last name: ";
    cin >> lastName;
    
    cout << "Enter your favourite meal: ";
    cin >> favMeal;

    cout << "Enter your favourite movie: ";   
    cin >> favMovie;

    // Concatenate first and last names and store in fullName
    fullName = firstName + " " + lastName;

    // Output information
    cout << "*********OUTPUT**********"<< endl;
    cout << "Your full name is " << fullName << endl;
    cout << "Your favourite meal is " << favMeal << endl;
    cout << "Your favourite movie is " << favMovie << endl;
}