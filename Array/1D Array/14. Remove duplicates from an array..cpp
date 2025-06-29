//14. Remove duplicates from an array.

#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter the size of array: ";
    cin >> n;

    int arr[n];
    cout << "Enter " << n << " elements:\n";
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    cout << "\nArray after removing duplicates:\n";

    for(int i = 0; i < n; i++) {
        bool isDuplicate = false;

        for(int j = 0; j < i; j++) {
            if(arr[i] == arr[j]) {
                isDuplicate = true;
                break;
            }
        }
        if(!isDuplicate) {
            cout << arr[i] << " ";
        }
    }

    cout << endl;
    return 0;
}
