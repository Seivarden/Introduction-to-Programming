#include <iostream>
using namespace std;

int main() {
    // Compute area and perimeter of right angled triangle
    int height, base, hypotenuse;

    height = 3;
    base = 4;
    hypotenuse = 5;

    // Area = 1/2 (base * height)
    double area = 0.5 * base * height;

    // Permiter = height + base + hypotenuse
    int perimeter = height + base + hypotenuse;

    cout << "Area of triangle: " << area << endl;
    cout << "Perimeter of triangle: " << perimeter << endl;
}