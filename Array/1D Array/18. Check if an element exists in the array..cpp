//18. Check if an element exists in the array.

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

    cout << "Enter element to search: ";
    cin >> key;

    bool found = false;
    for(int i = 0; i < n; i++) {
        if(arr[i] == key) {
            found = true;
            break;
        }
    }

    if(found)
        cout << key << " exists in the array." << endl;
    else
        cout << key << " does not exist in the array." << endl;

    return 0;
}
