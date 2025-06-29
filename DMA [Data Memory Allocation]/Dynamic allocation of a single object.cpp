//1. Dynamic allocation of a single object
#include <iostream>
using namespace std;
class car{
	public:
		car(){
			cout << "Constructor Called " << endl;
		}
		~car(){
			cout << "Distructor Called " << endl;
		}
		void display(){
			cout << "This Is a Car. Car Name is Vanue " << endl;
		}
};
int main(){
	car* c = new car();
	c -> display();
	delete c;
	return 0;
}
