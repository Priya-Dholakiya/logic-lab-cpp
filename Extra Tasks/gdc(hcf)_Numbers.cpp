//13. Find the GCD (HCF) of two numbers
#include <iostream>
using namespace std;
main() {
    int num1, num2;
    cout << "Enter two numbers: ";
    cin >> num1 >> num2;
    while (num1 != num2) {
        if (num1 > num2) {
            num1 = num1 - num2; 
        } else {
            num2 = num2 - num1;
        }
    }
    cout << "The GCD (HCF) of the two numbers is: " << num1 << endl;
}

