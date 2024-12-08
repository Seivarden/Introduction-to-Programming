/*
    Rene Mogaka
    193210
*/
#include <iostream>
#include <cmath>
using namespace std;

double circleArea(float radius) {
    // πr^2
    return  3.14 * pow(radius, 2);
}

double squareArea(float side) {
    // side^2
    return pow(side, 2); 
}

double rectangleArea(float length, float width) {
    return length * width;
}

double triangleArea(float base, float height) {
    // 1/2bh
    return 0.5 * base * height;
}

int main() {
    // Program that computes area for various shapes
    // Variable choice to store user input
    int choice;

    cout << "------Welcome to Shape Area Calculator------" << endl;
    cout << "Enter the corresponding number to choose an option:" << endl;
    cout << "1. Circle" << endl;
    cout << "2. Square" << endl;
    cout << "3. Rectangle" << endl;
    cout << "4. Triangle" << endl;
    cout << "0. Quit" << endl;

    cout << "Select: ";
    cin >> choice;


    switch (choice) {
        case (1):
            int r;
            cout << "Enter radius: ";
            cin >> r;
            cout << "Area of circle is: " << circleArea(r);
            break;
        case (2):
            int s;
            cout << "Enter side length: ";
            cin >> s;
            cout << "Area of square is: " << squareArea(s);
            break;
        case (3):
            int l, w;
            cout << "Enter the length: ";
            cin >> l;
            cout << "Enter the width: ";
            cin >> w;
            cout << "Area of rectangle is: " << rectangleArea(l, w);
            break;
        case (4):
            int b, h;
            cout << "Enter the base: ";
            cin >> b;
            cout << "Enter the height: ";
            cin >> h;
            cout << "Area of triangle is: " << triangleArea(b, h);
            break;
        case (0):
            cout << "Goodbye.";
            break;
        default:
            cout << "Invalid input. Please enter a valid number";
    }

    return 0;
}