#include <iostream>
using namespace std;

main(){
	int a,b,c,d,e;
	cout<<"Enter No A :- ";
	cin>>a;
	cout<<"Enter No B :- ";
	cin>>b;
	cout<<"Enter No C :- ";
	cin>>c;
	cout<<"Enter No D :- ";
	cin>>d;
	cout<<"Enter No E :- ";
	cin>>e;
	
	if(a==b && b==c && a==c){
		cout<<"All Are Equal Values";
	}else{
		if(a>b){
			if(a>c){
				if(a>d){
					if(a>e){
						cout<<"A is Maximum Value";
					}else{
						cout<<"E is Maximum Value";
					}
				}else{
					if(d>e){
						cout<<"D is Maximum Value";
					}else{
						cout<<"E is Maximum Value";
					}
				}
			}else{
				if(c>d){
					if(c>e){
						cout<<"C is Maximum Value";
					}else{
						cout<<"E is Maximum Value";
					}
				}else{
					if(d>e){
						cout<<"D is Maximum Value";
					}else{
						cout<<"E is Maximum Value";
					}
				}
			}
		}else{
			if(b>c){
				if(b>d){
					if(b>e){
						cout<<"B is Maximum Value";
					}else{
						cout<<"E is Maximum Value";
					}
				}else{
					if(d>e){
						cout<<"D is Maximum Value";
					}else{
						cout<<"E is Maximum Value";
					}
				}
			}else{
				if(c>d){
					if(c>e){
						cout<<"C is Maximum Value";
					}else{
						cout<<"E is Maximum Value";
					}
				}else{
					if(d>e){
						cout<<"D is Maximum Value";
					}else{
						cout<<"E is Maximum Value";
					}
				}
			}
		}
	}
}
