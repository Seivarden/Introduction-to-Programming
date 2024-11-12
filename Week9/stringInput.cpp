#include <iostream>

using namespace std;

int main() {
    // Declare string variable myName
    string myName, description;

    // Prompt user for their full name
    cout << "Please enter your full name: ";
    getline(cin, myName);
    
    // Prompt user for their description
    cout << "Please describe yourself: " << endl;
    getline(cin, description);

    cout << "Your name is: " << myName << endl;
    cout << "You said the following about yourself: " << description << endl;

    return 0;
}