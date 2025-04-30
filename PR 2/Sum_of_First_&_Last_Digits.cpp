//3.first and last digit Sum..
#include <iostream>
using namespace std;
main() {
    int number, firstDigit, lastDigit;
    cout << "Enter a number: ";
    cin >> number;
    lastDigit = number % 10;
    while (number >= 10) {
        number /= 10;
    }
    firstDigit = number;
    int sum = firstDigit + lastDigit;
    cout << "Sum of the first and last digits: " << sum << endl;
}

