//4. Calculate sum of even numbers from 1 to 100
#include <iostream>
using namespace std;
main() {
    int sum = 0;
    for (int i = 2; i <= 100; i++) {
    	if(i%2==0){
    		sum = sum + i;	
		}
    }
    cout << "Sum of even numbers from 1 to 100 is: " << sum << endl;
}

