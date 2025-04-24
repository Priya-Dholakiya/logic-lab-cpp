//PRT Formula Programme

#include <iostream>
using namespace std;

main(){
	int p,t;
	float r,Ans;
	
	cout<<"Enter the value of P:";
	cin>>p;	
	cout<<"Enter the value of R(%):";
	cin>>r;	
	cout<<"Enter the value of T:";
	cin>>t;
	
	Ans=p*r*t/100;
	
	cout<<"Ans : "<<Ans<<endl;	
}
