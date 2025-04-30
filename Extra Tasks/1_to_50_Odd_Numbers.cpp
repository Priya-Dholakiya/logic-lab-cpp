//2. Print all odd numbers from 1 to 50
#include <iostream>
using namespace std;
main() {
    cout << "Odd numbers from 1 to 50 are:" << endl;
    for (int i = 1; i <= 50; i++) {
        if (i % 2 != 0) {
            cout << i << " ";
        }
    }
}

