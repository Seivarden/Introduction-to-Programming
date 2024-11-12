#include <iostream>

using namespace std;

int main() {
    cout << "Welcome to the wonderful world of C++!" << endl;
    cout << "This is my first C++ output statement" << endl;
    cout << "Soon, I will learn how to input data into my program" << endl;
    cout << "Strathmore University is the \ leading \nuniversity in the region." << endl;

    for (int i=0;i<1000000;i++) {
        cout << i << "\r";
    }
    return 0;
}