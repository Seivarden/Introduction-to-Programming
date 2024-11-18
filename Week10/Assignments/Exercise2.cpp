#include <iostream>

using namespace std;

int main() {
    // Prints letter grade for score entered in percent
    // Collect student information 

    string firstName, lastName;
    int score;

    cout << "---STUDENT INFORMATION---" << endl;
    cout << "First name: ";
    cin >> firstName;

    cout << "Last name: ";
    cin >> lastName;

    cout << "Percent score (0-100): ";
    cin >> score;

    if (score >= 0 && score <= 100) {
        // Determine letter grade based on score
        char grade;
        switch (score / 10) {
            case 10: 
            case 9:
            case 8:
            case 7: 
                grade = 'A';
                break;
            case 6: 
                grade = 'B';
                break;
            case 5:
                grade = 'C';
                break;
            case 4: 
                grade = 'D';
                break;
            default:
                grade = 'F';
                break;
        }
        cout << firstName << " " << lastName << "'s final grade is " << grade;
        return 0;
    } else {
        cout << "Invalid score. Please enter a value between 1 and 100.";
        return -1;
    }
}