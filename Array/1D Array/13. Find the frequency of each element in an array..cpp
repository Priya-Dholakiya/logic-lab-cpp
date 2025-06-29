//13. Find the frequency of each element in an array.

#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter size of array: ";
    cin >> n;

    int arr[n];
    bool visited[n]; // To mark if element is already counted

    cout << "Enter " << n << " elements:\n";
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
        visited[i] = false;
    }

    cout << "\nFrequency of each element:\n";
    for(int i = 0; i < n; i++) {
        if(visited[i] == true)
            continue;

        int count = 1;
        for(int j = i+1; j < n; j++) {
            if(arr[i] == arr[j]) {
                count++;
                visited[j] = true; // Mark as counted
            }
        }

        cout << arr[i] << " : " << count << " times" << endl;
    }

    return 0;
}
