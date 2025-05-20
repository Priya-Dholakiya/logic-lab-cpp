//8. Count the number of positive numbers in an array.

#include <iostream>
using namespace std;

main() {
    int size, count = 0;
    cout << "Enter the size of the array: ";
    cin >> size;
    int arr[size];
    cout << "Enter " << size << " elements (positive or negative):" << endl;
    for (int i = 0; i < size; i++) {
        cin >> arr[i];
    }
    for (int i = 0; i < size; i++) {
        if (arr[i] > 0) {
            count++;  
        }
    }
    cout << "The number of positive elements in the array is: " << count << endl;
}
