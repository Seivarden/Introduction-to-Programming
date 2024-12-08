/*
    Rene Mogaka
    193210
*/

#include <iostream>
using namespace std;

int main() {
    // Calculates total discount percent based on purchase total
    // The larger the total, the greater the discount.
    
    float totalPurchaseAmount, discount, totalAfterDiscount;

    cout << "Enter total purchase amount: ";
    cin >> totalPurchaseAmount;


    if (totalPurchaseAmount >= 1000) {
        if (totalPurchaseAmount <= 2500) {
            discount = 0.1;
        } else if (totalPurchaseAmount <= 5000) {
            discount = 0.12;
        } else if (totalPurchaseAmount <= 10000) {
            discount = 0.15;
        } else if (totalPurchaseAmount <= 50000) {
            discount = 0.17;
        } else if (totalPurchaseAmount <= 100000) {
            discount = 0.20;
        } else if (totalPurchaseAmount <= 1000000) {
            discount = 0.25;
        }
        totalAfterDiscount = totalPurchaseAmount * (1 - discount);
        cout << "Congratulations! Your discount has been applied." << endl;
        cout << "Original Value: " << totalPurchaseAmount << endl;
        cout << "Discount Percentage: " << discount * 100 << "%" << endl;
        cout << "Pay: " << totalPurchaseAmount * (1 - discount) << endl;
    } else {
        cout << "Please purchase items worth more than Sh. 1000 in total to acces a discount.";
    }
}