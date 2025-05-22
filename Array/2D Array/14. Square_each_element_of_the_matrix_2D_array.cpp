//14. Square each element of the matrix.

#include <iostream>
using namespace std;

main() {
    int row, col;
    cout << "Enter number of rows: ";
    cin >> row;
    cout << "Enter number of columns: ";
    cin >> col;

    int arr[row][col], square[row][col];

    cout << "Enter " << row * col << " elements:\n";
    for(int i = 0; i < row; i++)
        for(int j = 0; j < col; j++) {
            cout << "Element at [" << i << "][" << j << "]: ";
            cin >> arr[i][j];
        }
    for(int i = 0; i < row; i++)
        for(int j = 0; j < col; j++)
            square[i][j] = arr[i][j] * arr[i][j];

    cout << "\nMatrix after squaring each element:\n";
    for(int i = 0; i < row; i++) {
        for(int j = 0; j < col; j++)
            cout << square[i][j] << " ";
        cout << endl;
    }
}
