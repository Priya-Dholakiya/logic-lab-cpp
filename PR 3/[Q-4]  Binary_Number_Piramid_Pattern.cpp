//1 0 1 0 1
//  1 0 1 0
//    1 0 1
//      1 0
//        1

#include <iostream>
using namespace std;

main() {
    int i, j;
    for (i = 1; i <= 5; i++) {
        for (j = 1; j < i; j++) {
            cout << "  ";
        }
        for (j = 1; j <= 6 - i; j++) {
            cout << j % 2 << " ";
        }
        cout << endl;
    }
}


