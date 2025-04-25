#include <iostream>
#include <iostream>
using namespace std;

main() {
    int score;
    char grade;
    cout<<"Enter your Exam Score (0-100):- ";
    cin>>score;
    grade = (score >= 90) ? 'A' :
            (score >= 80) ? 'B' :
            (score >= 70) ? 'C' :
            (score >= 60) ? 'D' :
            (score >= 50) ? 'E' : 'F'; 
    cout<<"Enter Your Grade :- "<<grade<<endl;
    switch(grade) {
        case 'A':
			cout<<"Excellent Work...";
		break;
		case 'B':
			cout<<"Well Done...";
		break;
		case 'C':
			cout<<"Good Job...";
		break;
		case 'D':
			cout<<"You Passed ,but you could do batter ...";
		break;
		case 'E':
    		cout << "You just passed. Try to improve!";
    	break;
		case 'F':
			cout<<"Sorry, Because You Are failed...";
		break;	
		default:
			cout<<"Invalid Value... Please Try Again... :)";
    }
}

