// 123456789
//1*       *
//2 *     *
//3  *   *
//4   * *
//5    *

#include <iostream>
using namespace std;

main() {
    for (int i = 1; i <= 5; i++) {
        for (int j = 1; j <= 9; j++) {
            if (j == i || j == 10 - i) {
                cout << "*";
            } else {
                cout << " ";
            }
        }
        cout << endl;
    }
}

