//Class Template
#include <iostream>
using namespace std;

template <class T>
class Box {
	T value ;
	public:
		void setValue (T v){
			value = v;
		}
		T getValue (){
			return value;
		}
};
int main(){
	Box<int> B;
	B.setValue(800);
	cout << " Value is :- "<< B.getValue() << endl;
	
	Box<string> B1;
	B1.setValue("Priya Dholakiya");
	cout << " My Name Is :- "<< B1.getValue() << endl;
	return 0;
}
