#include <iostream>
using namespace std;

main(){
	int a,b,c,d;
	cout<<"Enter No A :- ";
	cin>>a;
	cout<<"Enter No B :- ";
	cin>>b;
	cout<<"Enter No C :- ";
	cin>>c;
	cout<<"Enter No D :- ";
	cin>>d;
	
	if(a==b && b==c && a==c){
		cout<<"All Are Equal Values";
	}else{
		if(a>b){
			if(a>c){
				if(a>d){
					cout<<"A is Maximum Value";
				}else{
					cout<<"D is Maximum Value";
				}
			}else{
				if(c>d){
					cout<<"C is Maximum Value";
				}else{
					cout<<"D is Maximum Value";
				}
			}
		}else{
			if(b>c){
				if(b>d){
					cout<<"B is Maximum Value";
				}else{
					cout<<"D is Maximum Value";
				}
			}else{
				if(c>d){
					cout<<"C is Maximum Value";
				}else{
					cout<<"D is Maximum Value";
				}
			}
		}
	}
}
