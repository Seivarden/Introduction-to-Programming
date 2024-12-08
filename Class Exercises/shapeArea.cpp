#include <iostream>
#include <cmath>

using namespace std;

int main() {
    // Program uses switch to determine area of shapes
    // Declare variables

    float radius, length, width, side, squareArea, rectArea, circleArea;
    char choice;
    cout << "---CHOOSE YOUR SHAPE---" << endl;    
    cout << "---Type 'C' for circle, 'S' for square, and 'R' for rectangle." << endl;    
    cout << "Choose shape: ";
    cin >> choice;


    switch (choice) {
        case ('C'):
            // Prompt user for radius
            cout << "Enter the radius of the circle: ";
            cin >> radius;
            float circleArea = 3.14 * pow(radius, 2.00); 
            cout << "Area of circle of radius " << radius << " is: " << circleArea; 
            break; 

        case ('R'):
            cout << "Length of rectangle: ";
            cin >> length;
            cout << "Width of rectangle: ";
            cin >> width;   
            rectArea = length * width;
            cout << "Area of rectangle is: " << rectArea;
            break;

        case ('S'):
            cout << "Side of square: ";
            cin >> side;
            squareArea = pow(side, 2.00);
            cout << "Area of square is: " << squareArea;
            break;
            
        default: 
            cout << "Invalid input. Please enter 'R', 'C', or 'S'. ";
    }  
    return 0;
}