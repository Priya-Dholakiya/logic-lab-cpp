//Function Template
#include<iostream>
using namespace std;

template <typename T> // T is a Place Holder
T add(T a ,  T b){
	return a+b;
}
int main(){
	cout << add<int>(5,6) << endl;
	cout << add<float>(5.23 , 56.2) << endl;
	return 0;
}
