//* * * * * * * * * *
//* * * *     * * * *
//* * *         * * *
//* *             * *
//*                 *
//* *
//* * *
//* * * *
//* * * * *
#include <iostream>
using namespace std;

main(){
	for(int i = 5; i >= 1; i--){
		for(int j = 1; j <= i; j++){
			cout << "*";
		}
		for(int s = 1; s <= (5 - i) * 4; s++){
			cout << " ";
		}
		for(int j = 1; j <= i; j++){
			cout << "*";
		}
		cout << endl ;
	}
	for(int i = 1; i <= 5; i++){
		for(int j = 1; j <= i; j++){
			cout << "*";
		}
		cout << endl ;
	}
}
