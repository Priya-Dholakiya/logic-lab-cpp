#include <iostream>
using namespace std;
main(){
	int ch;
	cout<<"Enter Your Choice [1 to 12] :- ";
	cin>>ch;
	switch(ch){
		case 1:
			cout<<"January - 31 days";
		break;
		case 2:
			cout<<"February - 28 days in a common year and 29 days in leap years";
		break;
		case 3:
			cout<<"March - 31 days";
		break;
		case 4:
			cout<<"April - 30 days";
		break;
		case 5:
			cout<<"May - 31 days";
		break;
		case 6:
			cout<<"June - 30 days";
		break;
		case 7:
			cout<<"July - 31 days";
		break;
		case 8:
			cout<<"August - 31 days";
		break;
		case 9:
			cout<<"September - 30 days";
		break;
		case 10:
			cout<<"October - 31 days";
		break;
		case 11:
			cout<<"November - 30 days";
		break;
		case 12:
			cout<<"December - 31 days";
		break;	
		default:
			cout<<"Invalid Value... Please Try Again.. :)";
	}
}
