//5. Find the smallest element in an array.

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
    int smallest = arr[0]; 
    for (int i = 1; i < size; i++) {
        if (arr[i] < smallest) {
            smallest = arr[i];  
        }
    }
    cout << "The smallest element in the array is: " << smallest << endl;
}
