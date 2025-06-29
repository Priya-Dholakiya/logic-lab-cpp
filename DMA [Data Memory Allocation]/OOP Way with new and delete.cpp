//OOP Way with new and delete
#include <iostream>
using namespace std;

class Student{
	int roll;
	string name;
	
	public:
	//Constructor
	Student(int r , string n){
		roll = r;
		name = n;
		cout << " Constructor Called for: " << name << endl;
	}
	void display(){
		cout << " Roll : "<< roll << endl << " Name : "<< name << endl;
	}
	
	//Distructor
	~Student(){
		cout << " Distructor ko Call Kiya Gaya he"<< endl;
	}
};

int main(){
	// Dynamic Object Creation using new (OOP Way)
	Student* s = new Student (8978,"Priya");
	s->display();
	// Free Memory
	delete s; // distructor call karne ke liye
	return 0;
}
