#include <iostream>

using namespace std;

int main() {
    // Prompt user to input two values
    int num1, num2;
    bool boolVar1=true, boolVar2=false;

    // Prompt and capture user input
    cout << "Enter first non-zero value: ";
    cin >> num1;
    cout << "Enter second non-zero value: ";
    cin >> num2; 

    // *****ARITHMETIC OPERATORS*****
    // Addition operator (+) 
    cout << "Sum of " << num1 << " + " << num2 << " is: " << num1 + num2 << endl;  
    // Subtraction operator (-)
    cout << "Difference between " << num1 << " and " << num2 << " is: " << num1 - num2 << endl;  
    // Product operator (*)
    cout << "Product of " << num1 << " and " << num2 << " is: " << num1 * num2 << endl;  
    // Division operator (/)
    cout << "Division of " << num1 << " and " << num2 << " is: " << num1 / num2 << endl;  
    // Modulus operator (%)
    cout << "Modulus of " << num1 << " % " << num2 << " is: " << num1 % num2 << endl;  
    // Increment operator (++) as a prefix
    cout << "Increment (prefix) " << num1 << " by 1: " << ++num1 << endl;  
    // Increment operator (++) as a postfix
    cout << "Increment (postfix) " << num1 << " by 1: " << ++num1 << endl;  
    // Decrement operator (--) as a prefix 
    cout << "Decrement (prefix) " << num1 << " by 1: " << --num1  << endl;  
    // Decrement operator (--) as a postfix 
    cout << "Decrement (postfix) " << num1 << " by 1: " << --num1  << endl;  
    // Increment and assign operation (e.g. increase num1 by 3)
    num1 += 3; // This is the same as num1=num1+3
    cout << "Increment and assign num1 by 3: " << num1 << endl;

    // *****COMPARISON OPERATORS*****
    // Greater than operator (>)
    cout << num1 << " greater than " << num2 << " = " << (bool)(num1 > num2) << endl;
    // Less than operator (<)
    cout << num1 << " less than " << num2 << " = " << (bool)(num1 < num2) << endl;
    // Equal to operator (==)
    cout << num1 << " equals to " << num2 << " = " << (bool)(num1 == num2) << endl;
    // Not equal to operator (!=)
    cout << num1 << " not equals to " << num2 << " = " << (bool)(num1 != num2) << endl;

    // *****BOOLEAN OPERATORS*****
    // Boolean operator '&&'
    cout << boolVar1 << " && " << boolVar2 << " = " << (boolVar1 && boolVar2) << endl;   
    // Boolean operator '||'
    cout << boolVar1 << " || " << boolVar2 << " = " << (boolVar1 || boolVar2) << endl;   
    // Boolean operator '!'
    cout << "!" << boolVar1 << " = " << (!boolVar1) << endl;

    // *****POINTER OPERATIONS*****   
    // Declare pointer
    int* ptr = nullptr;
    // Assign a value to the pointer
    ptr = &num1;
    // Output address of num1
    cout << "Address of num1 = " << &num1 << endl;
    // Dereference the pointer to get the value at the memory location
    cout << "Value at memory location pointed by ptr = " << *ptr << endl;
    
    return 0;
}