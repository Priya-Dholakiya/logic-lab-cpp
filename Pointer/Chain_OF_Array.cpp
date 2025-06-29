//Chain Of Array
#include <iostream>
using namespace std;

int main(){
	int x=45;
	int *p=&x;
	int **ptr=&p;
	
	cout << "Value Of X is :-"<<x << endl;
	cout << "Value Of *p is :-"<<*p<<endl;
	cout << "Value Of **ptr is :-"<<**ptr <<endl;
	
	return 0;
}
