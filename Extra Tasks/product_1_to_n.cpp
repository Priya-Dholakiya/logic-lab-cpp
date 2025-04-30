//5. Find the product(*) of all numbers from 1 to N
#include <iostream>
using namespace std;
main() {
    int N;
    int product = 1;
    cout << "Enter a number (N): ";
    cin >> N;
    for (int i = 1; i <= N; i++) {
        product = product * i;
    }
    cout << "Product of all numbers from 1 to " << N << " is: " << product << endl;
}

