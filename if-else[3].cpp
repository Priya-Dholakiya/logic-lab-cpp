#include <iostream>
using namespace std;

main(){
	int a,b,c;
	cout<<"Enter No A :- ";
	cin>>a;
	cout<<"Enter No B :- ";
	cin>>b;
	cout<<"Enter No C :- ";
	cin>>c;
	
	if(a==b && b==c && a==c){
		cout<<"All Are Equal Values";
	}else{
		if(a>b){
			if(a>c){
				cout<<"A is Maximum Value";
			}else{
				cout<<"C is Maximum Value";
		}
	}else{
			if(b>c){
				cout<<"B is Maximum Value";
			}else{
				cout<<"C is Maximum Value";
		}
	}
	}
}
