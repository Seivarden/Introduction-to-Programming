#include <iostream>
using namespace std;

int main() {
    int num;
    int sum = 0;

    cout << "-----Counting Game-----" << endl;
    cout << "Enter as many integers to sum. Enter 0 to quit." << endl;

    do {
        cout << "Input number and press enter: ";
        cin >> num;
        sum += num;
        cout << "Current sum: " << sum << endl;
        cout << "Last number: " << num << endl;

    } while (num!=0);

    return 0;
}