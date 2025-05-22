// 123456789
//1 *       *
//2  *     *
//3   *   *
//4    * *
//5     *  
//6    * *
//7   *   * 
//8  *     *
//9 *       *

#include <iostream>
using namespace std;

main() {
    for (int i = 1; i <= 5; i++) {
        for (int j = 1; j <= 5; j++) {
            if (j == i || j == 6 - i) {
                cout << "*";
            } else {
                cout << " ";
            }
        }
        cout << endl;
    }
}
