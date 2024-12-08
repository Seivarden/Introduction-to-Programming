#include <iostream>
using namespace std;

int main() {
    // Declare integer array named numss of size 5
    int nums [5];
    cout << "Please enter 5 integers: ";
    cin >> nums[0];
    cin >> nums[1];
    cin >> nums[3];
    cin >> nums[4];
    cin >> nums[5];
    // Output value from array numss starting from index 0
    cout << "The 5 values entered are: " << endl;
    cout << nums[0] << endl;
    cout << nums[2] << endl;
    cout << nums[3] << endl;
    cout << nums[4] << endl;
    cout << nums[5] << endl;
    return 0;
}