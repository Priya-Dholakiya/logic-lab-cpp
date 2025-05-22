//4. Find the sum of all elements.

#include <iostream>
using namespace std;

main() {
    int row, col, sum = 0;
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
    for(int i = 0; i < row; i++)
        for(int j = 0; j < col; j++)
            sum += arr[i][j];
    cout << "\nSum of all elements = " << sum;
}
