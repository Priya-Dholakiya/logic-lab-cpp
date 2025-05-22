//16. Replace even numbers with 0.

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
    for (int i = 0; i < row; i++)
        for (int j = 0; j < col; j++) {
            cout << "Element at [" << i << "][" << j << "]: ";
            cin >> arr[i][j];
        }
    for (int i = 0; i < row; i++)
        for (int j = 0; j < col; j++)
            if (arr[i][j] % 2 == 0)
                arr[i][j] = 0;
    cout << "\nMatrix after replacing even numbers with 0:\n";
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++)
            cout << arr[i][j] << " ";
        cout << endl;
    }
}
