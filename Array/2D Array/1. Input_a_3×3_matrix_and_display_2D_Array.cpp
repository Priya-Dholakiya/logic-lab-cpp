//1. Input a 3×3 matrix and display it.

#include <iostream>
using namespace std;

main() {
    int row, col;
    cout << "Enter number of rows: ";
    cin >> row;
    cout << "Enter number of columns: ";
    cin >> col;

    int arr[row][col];

    cout << "Enter " << row * col << " elements:\n";
    for(int i = 0; i < row; i++)
        for(int j = 0; j < col; j++) {
            cout << "Element at [" << i << "][" << j << "]: ";
            cin >> arr[i][j];
        }
    cout << "\nMatrix :\n";
    for(int i = 0; i < row; i++) {
        for(int j = 0; j < col; j++)
            cout << arr[i][j] << " ";
        cout << endl;
    }
}

