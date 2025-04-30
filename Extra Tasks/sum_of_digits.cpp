//12. Find the sum of digits of a number
#include <iostream>
using namespace std;
main() {
    int num, sum = 0, digit;
    cout << "Enter a number: ";
    cin >> num;
    while (num != 0) {
        digit = num % 10;        
        sum = sum + digit;       
        num = num / 10;          
    }
    cout << "Sum of digits is: " << sum << endl;
}


