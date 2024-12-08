/*
    Rene Mogaka
    193210
*/
#include <iostream>
#include <unistd.h> // For the sleep function

using namespace std;

int main() {
    int light = 0; // 0 for red, 1 for yellow, 2 for green.

    while (true) {
        switch (light) {
            case 0: 
                cout << "\r";
                cout << "Red     " << flush; // flush clears the screen. Tried \r but it left 'w' at the end
                sleep(5);                // of green when transitioning from yellow
                light++;
                break;

            case 1:
                cout << "\r";
                cout << "Yellow     " << flush;
                sleep(5);
                light++;
                break;
            case 2:
                cout << "\r";
                cout << "Green     " << flush;
                sleep(5);
                break;
                light = 0;
        }
    }
}