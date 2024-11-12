// Preprocessor directive. Defines input/output
#include <iostream>

// Defines standard namespace for C++
using namespace std;

// Declares main function
int main() {
    // Declare an empty variable called number
    int number;

    // Prompt user input 
    cout << "Enter a number: ";

    // Assign user input to number
    cin >> number;

    // Prints to console
    cout << "You have entered: " << number << endl;
    
    // Raise an error
    cerr << "This is an example of an error message.";

    // // End main program 
    // return 0;
}