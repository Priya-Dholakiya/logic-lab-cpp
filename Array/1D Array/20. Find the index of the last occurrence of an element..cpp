//20. Find the index of the last occurrence of an element.

#include <iostream>
using namespace std;

int main() {
    int n, key;
    cout << "Enter size of array: ";
    cin >> n;

    int arr[100];
    cout << "Enter " << n << " elements:\n";
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    cout << "Enter element to find last occurrence of: ";
    cin >> key;

    int index = -1;
    for(int i = n - 1; i >= 0; i--) {
        if(arr[i] == key) {
            index = i;
            break;
        }
    }

    if(index != -1)
        cout << key << " last occurs at index: " << index << endl;
    else
        cout << key << " not found in the array." << endl;

    return 0;
}
