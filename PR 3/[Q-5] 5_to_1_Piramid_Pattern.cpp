//        5
//      4 5 4
//    3 4 5 4 3
//  2 3 4 5 4 3 2
//1 2 3 4 5 4 3 2 1

#include <iostream>
using namespace std;

int main() {
    int i, j;
    for (i = 5; i >= 1; i--) {
        for (j = 1; j < i; j++) {
            cout << "  ";
        }
        for (j = i; j <= 5; j++) {
            cout << j << " ";
        }
        for (j = 5 - 1; j >= i; j--) {
            cout << j << " ";
        }
        cout << endl;
    }
    return 0;
}

