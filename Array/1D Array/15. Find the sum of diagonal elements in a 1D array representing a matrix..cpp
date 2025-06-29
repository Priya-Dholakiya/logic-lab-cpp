//15. Find the sum of diagonal elements in a 1D array representing a matrix.

#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter size of matrix (n x n): ";
    cin >> n;

    int size = n * n;
    int arr[size];

    cout << "Enter " << size << " elements:\n";
    for(int i = 0; i < size; i++) {
        cin >> arr[i];
    }

    int sum = 0;
    for(int i = 0; i < n; i++) {
        sum += arr[i * n + i];
    }

    cout << "Sum of diagonal elements: " << sum << endl;
    return 0;
}
