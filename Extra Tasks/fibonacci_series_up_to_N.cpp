//11. Print Fibonacci Series up to N terms
#include <iostream>
using namespace std;
main() {
    int N;
    cout << "Enter the number of terms: ";
    cin >> N;
    int first = 0, second = 1, next;
    cout << "Fibonacci Series up to " << N << " terms: ";
    for (int i = 1; i <= N; i++) {
        if (i == 1) {
            cout << first << " ";
            continue;
        }
        if (i == 2) {
            cout << second << " ";
            continue;
        }
        next = first + second;
        cout << next << " ";
        first = second;        
        second = next;
    }
    cout << endl;
}

