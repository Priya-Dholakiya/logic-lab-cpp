//2. Find Odd Numbers in 1D Array

#include <iostream>
using namespace std;

main() {
    int size;
    cout << "Enter the size of the array: ";
    cin >> size;
    int* arr = new int[size];
    cout << "Enter " << size << " elements:\n";
    for (int i = 0; i < size; i++) {
        cin >> arr[i];
    }
    cout << "Even numbers are: ";
    for (int i = 0; i < size; i++) {
        if (arr[i] % 2 == 0) {
            cout << arr[i] << " ";
        }
    }
}

