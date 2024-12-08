#include <iostream>
using namespace std;

int main() {
    string word;

    cout << "Enter word to be split: ";
    cin >> word;

    for (char letter : word) {
        cout << letter << " ";
    }
    cout << endl;
}