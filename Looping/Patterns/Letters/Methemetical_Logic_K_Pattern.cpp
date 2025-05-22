//  1 2 2 4 5
//1 *       *
//2 *     *
//3 *   *
//4 * *
//5 *    *
//6 *      *
//7 *        *

#include <iostream>
using namespace std;

main() {
    for (int i = 1; i <= 7; i++) {           
        for (int j = 1; j <= 5; j++) {        
            if (j == 1 || (i <= 4 && j == 6 - i) || (i >= 5 && j == i - 2)) {
                cout << "*";
            } else {
                cout << " ";
            }
        }
        cout << endl;
    }
}

