/*
 Rene Mogaka
 193210
*/

#include <iostream>
using namespace std;

int main() {
    // Computers letter grade from percentage score
    // Uses switch/case 

    string fullName, course;
    int score;
    char letterGrade;

    // Prompt user for name
    cout << "Enter your full name: ";
    getline (cin, fullName);

    // Get course 
    cout << "Enter the course name: ";
    getline(cin, course);

    // Get score 
    cout << "Enter the percentage score: ";
    cin >> score;

    if (score >= 0 && score <= 100) {
        // Divide by 10 to make into single-digit rounded integer 
        // E.g. 78 becomes 7. This makes it easy to handle with switch case (which has no evaluations > < etc).
        cout << score / 10 << endl;
        switch (score / 10) {
            case 10:
            case 9:
            case 8:
            case (7): 
                letterGrade = 'A';
                break;
            case (6): 
                letterGrade = 'B';
                break;
            case (5): 
                letterGrade = 'C';
                break;
            case (4): 
                letterGrade = 'D';
                break;
            default:
                cout << "Invalid score.";
                break;
        }
        cout << fullName <<": Your grade for " << course <<  " is: "<< letterGrade << ".";
    } else {
        cout << "Invalid score. Please enter a number between 1 and 100.";
    }
}