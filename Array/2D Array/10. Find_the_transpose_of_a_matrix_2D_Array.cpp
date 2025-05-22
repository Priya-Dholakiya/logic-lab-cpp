//10. Find the transpose of a matrix.

#include <iostream>
using namespace std;

main() {
    int row, col;
    cout << "Enter number of rows: ";
    cin >> row;
    cout << "Enter number of columns: ";
    cin >> col;

    int arr[row][col], transpose[col][row];

    cout << "Enter " << row * col << " elements:\n";
    for(int i = 0; i < row; i++)
        for(int j = 0; j < col; j++) {
            cout << "Element at [" << i << "][" << j << "]: ";
            cin >> arr[i][j];
        }

    for(int i = 0; i < row; i++)
        for(int j = 0; j < col; j++)
            transpose[j][i] = arr[i][j];

    cout << "\nTranspose of the matrix:\n";
    for(int i = 0; i < col; i++) {
        for(int j = 0; j < row; j++)
            cout << transpose[i][j] << " ";
        cout << endl;
    }
}
