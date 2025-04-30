//6. Print table of any number entered by the user
#include <iostream>
using namespace std;
main() {
    int num;
    cout << "Enter a number: ";
    cin >> num;
    cout << "Table of " << num << " is:" << endl;
    for (int i = 1; i <= 10; i++) {
        cout << num << " x " << i << " = " << num * i << endl;
    }
}

