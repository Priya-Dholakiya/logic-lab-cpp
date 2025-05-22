//* * * * * *
//        *
//      *
//    *
//  *
//* * * * * *

#include <iostream>
using namespace std;

main(){
	int i,j;
	
	for(i=1 ; i<=6 ; i++){
		for(j=1 ; j<=6 ; j++){
			if(i==1 || i==6 || j==(6-i+1)){
				cout << "*";
			}else{
				cout << " ";
			}
		}
		cout << endl;
	}
}
