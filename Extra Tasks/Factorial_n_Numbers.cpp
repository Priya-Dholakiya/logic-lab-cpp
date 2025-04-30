//3. Find factorial of a number (n!)
#include <iostream>
using namespace std;

main() {
    int n;
    int fact = 1;
    cout << "Enter a number: ";
    cin >> n;
    for (int i = 1; i <= n; i++) {
        fact = fact * i;
    }
    cout << "Factorial of " << n << " is: " << fact << endl;
}

