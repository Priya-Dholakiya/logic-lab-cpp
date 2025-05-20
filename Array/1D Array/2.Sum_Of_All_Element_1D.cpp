//2. Find Sum Of all element in an array

#include <iostream>
using namespace std;

main() {
    int size, sum = 0;
    cout << "Enter the size of the array: ";
    cin >> size;
    int arr[size];
    cout << "Enter " << size << " elements:" << endl;
    for (int i = 0; i < size; i++) {
        cin >> arr[i];
        sum += arr[i]; 
    }
    cout << "The sum of the array elements is: " << sum << endl;
}
