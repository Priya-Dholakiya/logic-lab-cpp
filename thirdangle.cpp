//Third Angle Find in triangle Programme

#include <iostream>
using namespace std;

main(){
	int Ans, Angle1,Angle2;
	
	cout<<"Enter The First Angle Value :";
	cin>>Angle1;
	cout<<"Enter The Secound Angle Vlaue :";
	cin>>Angle2;
	
	Ans=180-(Angle1+Angle2);
	
	cout<<"Third Angle Value is :"<<Ans<<endl;
}
