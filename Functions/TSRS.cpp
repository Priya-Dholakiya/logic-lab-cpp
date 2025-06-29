//TSRS (Tack Something Return Something)
#include <iostream>
using namespace std;

int add(int a, int b){
	return a+b;
}
int main(){
	int result = add(45,12);
	cout << "Sum Of Number is :"<<result <<endl;
	return 0;
}
