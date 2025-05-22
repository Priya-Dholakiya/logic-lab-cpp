//9. Calculate the sum of diagonal elements.
#include <iostream>
using namespace std;

main() {
    int size, sum = 0;
    cout << "Enter the size of square matrix (n x n): ";
    cin >> size;

    int arr[size][size];

    cout << "Enter " << size * size << " elements:\n";
    for(int i = 0; i < size; i++)
        for(int j = 0; j < size; j++) {
            cout << "Element at [" << i << "][" << j << "]: ";
            cin >> arr[i][j];
        }

    for(int i = 0; i < size; i++)
        sum += arr[i][i];

    cout << "\nSum of primary diagonal elements = " << sum;
}
