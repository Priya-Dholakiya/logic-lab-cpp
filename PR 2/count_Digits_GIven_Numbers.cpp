//2.count the number of digitss..
#include <iostream>
using namespace std;
main() {
    int num, count = 0;
    cout << "Enter a number: ";
    cin >> num;
    if (num == 0) {
        count = 1; 
    } else {
        while (num != 0) {
            num = num / 10;
            count++;
        }
    }
    cout << "Total digits: " << count << endl;
}

