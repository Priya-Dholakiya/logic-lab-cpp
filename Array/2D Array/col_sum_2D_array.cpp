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
     cout << "\nMatrix:\n";
    for(i=0 ; i<row ; i++){
    	for(j=0 ; j<col ; j++){
    		cout << a[i][j];
		}
		cout << endl;
	}
    for (j = 0; j < row; j++) {
    	int cs=0;
        for (i = 0; i < col; i++) {
            cs+= a[i][j];
        }
        cout << endl;
        cout << "Sum of column " <<  j  << "is :- " << cs << endl;
    }
}
