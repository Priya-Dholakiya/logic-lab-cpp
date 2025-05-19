//3. Sum Of N Numbers in 1D Array

#include <iostream>
using namespace std;

int main() {
    int size, sum = 0;
    cout << "Enter size of the array: ";
    cin >> size;
    int* arr = new int[size];
    cout << "Enter " << size << " elements:\n";
    for (int i = 0; i < size; i++) {
        cin >> arr[i];
        sum += arr[i];  
    }
    cout << "Sum = " << sum << endl;
}

