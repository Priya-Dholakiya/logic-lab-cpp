//10. Check whether a number is a palindrome
#include <iostream>
using namespace std;
main() {
    int num, originalNum, reverse = 0, digit;
    cout << "Enter a number: ";
    cin >> num;
    originalNum = num; 
    while (num != 0) {
        digit = num % 10;          
        reverse = reverse * 10 + digit; 
        num = num / 10;             
    }
    if (originalNum == reverse) {
        cout << originalNum << " is a palindrome." << endl;
    } else {
        cout << originalNum << " is not a palindrome." << endl;
    }
}

