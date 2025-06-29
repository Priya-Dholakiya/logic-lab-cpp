// POINTER IN SINGLY LINKLIST
#include <iostream>
using namespace std;

class Node {
	public :
	int data;
	Node *next;
};

int main(){
	
	Node *ptr = NULL;
	
	Node *HEAD = new Node();
	HEAD -> data = 78;
	HEAD -> next =NULL;
	
	ptr = HEAD;
	
	Node *current = new Node();
	current -> data = 89;
	current -> next = NULL;
	HEAD -> next = current;
	
	current = new Node();
	current -> data = 56;
	current -> next = NULL;
	HEAD -> next -> next = current;
	
	current = new Node();
	current -> data = 25;
	current -> next = NULL;
	HEAD -> next -> next -> next = current;
	
	current = new Node();
	current -> data = 45;
	current -> next = NULL;
	HEAD -> next -> next -> next -> next = current; 
	
	while(ptr != NULL){
		cout << ptr -> data << endl;
		ptr = ptr -> next;
	}
	
	return 0;
}
