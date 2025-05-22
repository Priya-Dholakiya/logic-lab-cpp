//6. Find the column-wise sum of matrix.

#include <iostream>
using namespace std;

int main() {
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

    cout << "\nRow-wise sum of the matrix:\n";
    for(int j = 0; j < col; j++) {
        int sum = 0;
        for(int i = 0; i < row; i++)
            sum += arr[i][j];
        cout << "Sum of Column " << j << " = " << sum << endl;
    }
}

