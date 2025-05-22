//  1 2 3 4 5
//1 * * * * *
//2 * 
//3 *   * * * 
//4 *       * 
//5 *       *
//6 * * * * *

#include <iostream>
using namespace std;

main(){
	int i,j;
	for(i=1 ; i<=6 ; i++){
		for(j=1 ; j<=5 ; j++){
			if(i==1 || i==6 || j==1 || (i==3 && j>=3) || ((i==4 || i==5) && j==5)){
				cout << " *";
			}else{
				cout << " ";
			}
		}
		cout << endl;
	}
}
