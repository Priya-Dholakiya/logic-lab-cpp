#include <iostream>
using namespace std;
main(){
	int a,b,c,d,e;
	cout<<"Enter no A :- ";
	cin>>a;
	cout<<"Enter no B :- ";
	cin>>b;
	cout<<"Enter no C :- ";
	cin>>c;
	cout<<"Enter no D :- ";
	cin>>d;
	cout<<"Enter no E :- ";
	cin>>e;
	if(a==b && b==c && c==d && d==e){
		cout<<"All are Equal Value";
	}else if(a>b && a>c && a>d && a>e){
		cout<<"A is Maximum Value";
	}else if(b>a && b>c && b>d && b>e){
		cout<<"B is Maximum Value";
	}else if(c>a && c>b && c>d && c>e){
		cout<<"D is Maximum Value";
	}else if(d>a && d>b && d>c && d>e){
		cout<<"D is Maximum Value";
	}else if(e>a && e>b && e>c && e>d){
		cout<<"E is Maximum Value";
	}else{
		cout<<"Some Value are Same...";
	}
}
