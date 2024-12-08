/*
    Rene Mogaka
    193210
*/ 
#include <iostream>

 using namespace std;

 int main() {
    // Outputs letter grade given score percentage 
    // Uses if/else-if/else conditional

    string fullName, course;
    int score;
    char letterGrade;

    // Prompt user for their name 
    cout << "Enter your full name: ";
    getline(cin, fullName);

    // Get course 
    cout << "Enter the course name: ";
    getline(cin, course);

    // Get score
    cout << "Enter the percentage score: ";
    cin >> score;

    // Checks if score is valid percent
    if (score >= 0 && score <= 100) {
      // Nested if for valid scores (above 40)
      if (score >= 40) {
        if (score >= 70) {
          letterGrade = 'A';
        } else if(score >= 60) {
          letterGrade = 'B';
        } else if(score >= 50) {
          letterGrade = 'C';
        } else {
          letterGrade = 'D';
        }
        cout << fullName <<": Your grade for " << course <<  " is: "<< letterGrade << ".";
      } else {
        cout << "Invalid score.";
      }
    } else {
      cout << "Invalid score. Please enter a score between 0 and 100.";
    }

    return 0;
 }