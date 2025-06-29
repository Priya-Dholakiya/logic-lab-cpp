//16. Insert an element at a specific position in an array.

#include <iostream>
using namespace std;

int main() {
    int n, pos, value;
    cout << "Enter size of array: ";
    cin >> n;

    int arr[100];

    cout << "Enter " << n << " elements:\n";
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    cout << "Enter position to insert (0 to " << n << "): ";
    cin >> pos;

    cout << "Enter value to insert: ";
    cin >> value;

    if(pos < 0 || pos > n) {
        cout << "Invalid position!" << endl;
        return 0;
    }

    for(int i = n; i > pos; i--) {
        arr[i] = arr[i - 1];
    }

    arr[pos] = value;
    n++;

    cout << "Array after insertion:\n";
    for(int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }

    cout << endl;
    return 0;
}
