//11. Find the second largest element in an array.

#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter the size of array: ";
    cin >> n;

    if(n < 2) {
        cout << "Array should have at least two elements." << endl;
        return 0;
    }

    int *arr = new int[n];  

    cout << "Enter " << n << " elements:\n";
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int first = INT_MIN, second = INT_MIN;

    for (int i = 0; i < n; i++) {
        if (arr[i] > first) {
            second = first;
            first = arr[i];
        } else if (arr[i] > second && arr[i] != first) {
            second = arr[i];
        }
    }

    if (second == INT_MIN)
        cout << "No second largest element found." << endl;
    else
        cout << "The second largest element is: " << second << endl;

    delete[] arr;  
    return 0;
}
