// SINGLY NODE CONNECT
#include <iostream>
using namespace std;

class Node {
	public :
	int data;
	Node *next;
};

int main(){
	Node *HEAD  = new Node();
	HEAD -> data = 45;
	HEAD -> next = NULL;
	
	Node *n2  = new Node();
	n2 -> data = 40;
	n2 -> next = NULL;
	HEAD -> next = n2;
	
	Node *n3  = new Node();
	n3 -> data = 11;
	n3 -> next = NULL;
	n2 -> next = n3;
	
	Node *n4  = new Node();
	n4 -> data = 56;
	n4 -> next = NULL;
	n3 -> next = n4;
	
	Node *n5  = new Node();
	n5 -> data = 20;
	n5 -> next = NULL;
	n4 -> next = n5;
	
	cout << "Head Node :- " << HEAD -> data << " , Address :- " << HEAD -> next << endl;
	cout << "N2 Node :- " << n2 -> data << " , Address :- " << n2 -> next << endl;
	cout << "N3 Node :- " << n3 -> data << " , Address :- " << n3 -> next << endl;
	cout << "N4 Node :- " << n4 -> data << " , Address :- " << n4 -> next << endl;
	cout << "N5 Node :- " << n5 -> data << " , Address :- " << n5 -> next << endl;	
	return 0;
}

