//3. Find the Average of elements in an array.

#include <iostream>
using namespace std;

main() {
    int size, sum = 0;
    float average;
    cout << "Enter the size of the array: ";
    cin >> size;
    int arr[size];
    cout << "Enter " << size << " elements:" << endl;
    for (int i = 0; i < size; i++) {
        cin >> arr[i];
        sum += arr[i];  
    }
    average = (float)sum / size;  
    cout << "The average of the array elements is: " << average << endl;
}
