#include <iostream>
using namespace std;

main() {
    int row, col, i, j;
    cout << "Enter the Number Of Row :";
    cin >> row;
    cout << "Enter the Number Of Column :";
    cin >> col;
    int a[row][col];
    for (i = 0; i < row; i++) {
        for (j = 0; j < col; j++) {
            cout << "a[" << i << "][" << j << "] :- ";
            cin >> a[i][j];
        }
    }
    cout << "The Diagonal elements are: " << endl;
    for (i = 0; i < row; i++) {
        for (j = 0; j < col; j++) {
            if (i==j) {
                cout << a[i][j] << " ";
            }else{
            	cout << "  ";
			}
        }
        cout << endl;
    }
    cout << endl;
}
