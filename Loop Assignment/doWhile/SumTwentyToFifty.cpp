#include <iostream>

using namespace std;

int main() {
    int num = 20;
    int sum = 0;

    do {
        sum += num;
        num ++;
    } while (num<=25);

    cout << sum;
}   