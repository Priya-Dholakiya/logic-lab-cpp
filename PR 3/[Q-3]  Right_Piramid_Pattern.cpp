//        5
//      4 5
//    3 4 5
//  2 3 4 5
//1 2 3 4 5

#include <iostream>
using namespace std;
int main(){
   int i,j,s;
	for(i=5;i>=1;i--){
		for(s=1;s<i;s++){
			cout<<"  ";
		}
		for(j=i;j<=5;j++){
			cout<<j<<" ";
		}
		cout<<"\n";
	}
}
