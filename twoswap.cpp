//Two Varriable Swapping Programme

#include <iostream>
using namespace std;

main(){
	int a,b,c;
	
	cout<<"Enter First Value :";
	cin>>a;
	cout<<"Enter Secound Value :";
	cin>>b;
	
	c=a;
	a=c-b;
	b=c;
	
//	a=a+b
//	b=a-b
//	a=a-b
	
	cout<<"Swap value of a:"<<a<<endl;	
	cout<<"Swap value of b:"<<b<<endl;			
	
	
	
}
