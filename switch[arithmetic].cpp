#include <iostream>
using namespace std;
main(){
	int ch,a,b;
	float Ans;
	cout<<"Press 1 For Addition [+]"<<endl;
	cout<<"Press 2 For Substraction [-]"<<endl;
	cout<<"Press 3 For Multiplication [*]"<<endl;
	cout<<"Press 4 For Division [/]"<<endl;
	cout<<"Press 5 For Modulous [%]"<<endl;
	cout<<"Enter Your Choice :- ";
	cin>>ch;
	switch(ch){
		case 1:
			cout<<"Enter No A :- ";
			cin>>a;
			cout<<"Enter No B :- ";
			cin>>b;
			Ans=a+b;
			cout<<"Your Ans is : "<<Ans;
		break;	
		case 2:
			cout<<"Enter No A :- ";
			cin>>a;
			cout<<"Enter No B :- ";
			cin>>b;
			Ans=a-b;
			cout<<"Your Ans is : "<<Ans;
		break;
		case 3:
			cout<<"Enter No A :- ";
			cin>>a;
			cout<<"Enter No B :- ";
			cin>>b;
			Ans=a*b;
			cout<<"Your Ans is : "<<Ans;
		break;	
		case 4:
			cout<<"Enter No A :- ";
			cin>>a;
			cout<<"Enter No B :- ";
			cin>>b;
			Ans=a/b;
			cout<<"Your Ans is : "<<Ans;
		break;	
		case 5:
			cout<<"Enter No A :- ";
			cin>>a;
			cout<<"Enter No B :- ";
			cin>>b;
			Ans=a%b;
			cout<<"Your Ans is : "<<Ans;
		break;		
		default:
			cout<<"Invalid Value... Please Try Again... :)";
	}
}
