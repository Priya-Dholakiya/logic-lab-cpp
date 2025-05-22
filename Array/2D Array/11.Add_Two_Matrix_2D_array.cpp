//11. Add two matrices.

#include <iostream>
using namespace std;

main() {
    int row, col;
    cout << "Enter number of rows: ";
    cin >> row;
    cout << "Enter number of columns: ";
    cin >> col;

    int arr1[row][col], arr2[row][col], sum[row][col];

    cout << "Enter elements of first matrix:\n";
    for(int i = 0; i < row; i++)
        for(int j = 0; j < col; j++) {
            cout << "Element at [" << i << "][" << j << "]: ";
            cin >> arr1[i][j];
        }
    cout << "Enter elements of second matrix:\n";
    for(int i = 0; i < row; i++)
        for(int j = 0; j < col; j++) {
            cout << "Element at [" << i << "][" << j << "]: ";
            cin >> arr2[i][j];
        }
    for(int i = 0; i < row; i++)
        for(int j = 0; j < col; j++)
            sum[i][j] = arr1[i][j] + arr2[i][j];
    cout << "\nSum of the two matrices:\n";
    for(int i = 0; i < row; i++) {
        for(int j = 0; j < col; j++)
            cout << sum[i][j] << " ";
        cout << endl;
    }
}
