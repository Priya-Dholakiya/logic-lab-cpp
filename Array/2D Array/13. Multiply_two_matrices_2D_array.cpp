//13. Multiply two matrices.

#include <iostream>
using namespace std;

main() {
    int row1, col1, row2, col2;
    cout << "Enter number of rows for first matrix: ";
    cin >> row1;
    cout << "Enter number of columns for first matrix: ";
    cin >> col1;
    cout << "Enter number of rows for second matrix: ";
    cin >> row2;
    cout << "Enter number of columns for second matrix: ";
    cin >> col2;

    if (col1 != row2) {
        cout << "Error! Matrix multiplication not possible because columns of first matrix != rows of second matrix.";
        return 0;
    }
    int arr1[row1][col1], arr2[row2][col2], product[row1][col2];
    cout << "Enter elements of first matrix:\n";
    for(int i = 0; i < row1; i++)
        for(int j = 0; j < col1; j++) {
            cout << "Element at [" << i << "][" << j << "]: ";
            cin >> arr1[i][j];
        }
    cout << "Enter elements of second matrix:\n";
    for(int i = 0; i < row2; i++)
        for(int j = 0; j < col2; j++) {
            cout << "Element at [" << i << "][" << j << "]: ";
            cin >> arr2[i][j];
        }
    for(int i = 0; i < row1; i++)
        for(int j = 0; j < col2; j++)
            product[i][j] = 0;
    for(int i = 0; i < row1; i++)
        for(int j = 0; j < col2; j++)
            for(int k = 0; k < col1; k++)
                product[i][j] += arr1[i][k] * arr2[k][j];
    cout << "\nProduct of the two matrices:\n";
    for(int i = 0; i < row1; i++) {
        for(int j = 0; j < col2; j++)
            cout << product[i][j] << " ";
        cout << endl;
    }
}
