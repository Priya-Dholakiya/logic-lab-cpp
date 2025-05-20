//4. Remove Negative Value in 1D Array

#include <iostream>
using namespace std;

int main() {
    int size;
    cout << "Enter size of the array: ";
    cin >> size;
    int* arr = new int[size];
    cout << "Enter " << size << " elements:\n";
    for (int i = 0; i < size; i++) {
        cin >> arr[i];
    }
    cout << "Positive elements are: ";
    for (int i = 0; i < size; i++) {
        if (arr[i] >= 0) {
            cout << arr[i] << " ";
        }
    }
}

