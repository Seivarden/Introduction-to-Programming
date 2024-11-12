#include <iostream>
using namespace std;
//Declare an external variable
extern int globalVar;

int main() {
    //  Access the external variable
    cout << "In FileMain.cpp, globalVar: " << globalVar << endl;

    // Modify external variable
    globalVar = 200;
    cout << "In FileMain.cpp after modification, globalVar: " << globalVar << endl;

    return 0;
}