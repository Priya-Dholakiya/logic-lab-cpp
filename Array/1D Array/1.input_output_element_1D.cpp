//1.Input and Output elements of an array

#include <iostream>
using namespace std;

main() {
    int size;
    cout << "Enter the size of the array: ";
    cin >> size;
    int arr[size];  
    cout << "Enter " << size << " elements:" << endl;
    for (int i = 0; i < size; i++) {
        cin >> arr[i];
    }
    cout << "The array elements are:" << endl;
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
}

