//15. Cube each element of the matrix.

#include <iostream>
using namespace std;

main() {
    int row, col;
    cout << "Enter number of rows: ";
    cin >> row;
    cout << "Enter number of columns: ";
    cin >> col;

    int arr[row][col], cube[row][col];

    cout << "Enter " << row * col << " elements:\n";
    for(int i = 0; i < row; i++)
        for(int j = 0; j < col; j++) {
            cout << "Element at [" << i << "][" << j << "]: ";
            cin >> arr[i][j];
        }
    for(int i = 0; i < row; i++)
        for(int j = 0; j < col; j++)
            cube[i][j] = arr[i][j] * arr[i][j] * arr[i][j];
    cout << "\nMatrix after cubing each element:\n";
    for(int i = 0; i < row; i++) {
        for(int j = 0; j < col; j++)
            cout << cube[i][j] << " ";
        cout << endl;
    }
}
