//DMA - Static Memory allocation
#include <iostream>
using namespace std;

int main(){
	int i;
	int* num = new int[5];
	num[0]=10;
	num[1]=20;
	num[2]=30;
	num[3]=40;
	num[4]=50;
	for(i=0 ; i<5 ; i++){
		cout << "Element "<<i << " = " <<num[i]<<endl;	
	}
	delete[] num;
	return 0;
}
