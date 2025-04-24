//Three Varriable Swapping Programme

#include <iostream>
using namespace std;

main(){
	int a,b,c,swap;
	
	cout<<"Enter First Value :";
	cin>>a;
	cout<<"Enter Secound Value :";
	cin>>b;
	cout<<"Enter Third Value :";
	cin>>c;
	
	swap=a;
	a=b;
	b=c;
	c=swap;
	
	cout<<"Swap value of a:"<<a<<endl;	
	cout<<"Swap value of b:"<<b<<endl;
	cout<<"Swap value of c:"<<c<<endl;			
	
	
	
}
