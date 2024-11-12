#include <iostream>

using namespace std;
 
int calculateArea(int length, int width) {
    // Calculate area of rectangle
    int area = length * width;
    return area;
}

int main() {

    int l, w;

    // Prompt user to enter length
    cout << "Enter length: ";
    cin >> l;

    // Prompt user for width
    cout << "Enter width: ";
    cin >> w;

    int ans = calculateArea(l, w);
    cout << "Area of rectangle of length " << l << " and width " << w << " is: " << ans << endl; 
}