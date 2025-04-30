//1.Print Alphabets skiped 3 letters..
#include <iostream>
using namespace std;
main() {
    char letter = 'A';  
    do {
        cout << letter << " ";  
        letter += 4;  
    } while (letter <= 'Z');  
}

