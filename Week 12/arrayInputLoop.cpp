#include <iostream>
using namespace std;

int main() {
    // Declare integer array
    int nums [5];

    // Input loop
    cout << "Please enter 5 integers: ";
    
    for (int i=0; i<5;i++) {
        cin >> nums[i];
    }

    // Output loop
    cout << "The 5 values entered are: " << endl;
    for (int i : nums) {
        cout << nums[i] << endl;
    }
    return 0;
}