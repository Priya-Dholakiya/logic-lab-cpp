//7. Print diagonal elements (primary).

#include <iostream>
using namespace std;

int main() {
    int size;
    cout << "Enter the size of square matrix (n x n): ";
    cin >> size;

    int arr[size][size];

    cout << "Enter " << size * size << " elements:\n";
    for(int i = 0; i < size; i++)
        for(int j = 0; j < size; j++) {
            cout << "Element at [" << i << "][" << j << "]: ";
            cin >> arr[i][j];
        }

    cout << "\nPrimary diagonal elements:\n";
    for(int i = 0; i < size; i++)
        cout << arr[i][i] << " ";
}
