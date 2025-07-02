// C(Create) R(View/Read) U(Update) D(Delete) Operations - CRUD 
#include<iostream>
using namespace std;

class Node {
	public :
		int data;
		Node *next;
		
		//constructor
		Node(int data){
			this -> data = data;
			this -> next = NULL;
		}
};
class linkedlist{
	public:
		Node *head;
		int count;
		
		//constructor
		linkedlist(){
			head = NULL;
			count = 0;
		}
		
		void create(int data){
			Node *current = new Node (data);
			if(head == NULL){
				head = current;
			}else{
				Node *ptr = head;
				while(ptr -> next != NULL){
					ptr = ptr -> next;
				}
				ptr -> next = current;
			}
			count ++;
		}
		void view(){
			Node *ptr = head;
			while(ptr != NULL){
				cout << ptr -> data << endl;
				ptr = ptr -> next;
			}
		}
		void update(int element , int position){
			if(position < 0 || position >= count){
				cout << " !!! -- Invalid Position -- !!!" << endl;
				return;
			}
			Node *ptr = head;
			for(int i=0 ; i < position ; i++){
				ptr = ptr -> next;
			}
			ptr -> data = element;
			cout << " <----- Node Updated Succcesfully ----->" << endl;
		}
		void deleteNode(int position){
	    if(head == NULL){
	        cout << "<----- Your First Node is Empty ----->" << endl;
	        return;
	    }
	    if(position < 0 || position >= count){
	        cout << "!!!-- Invalid Position -- !!!" << endl;
	        return;
	    }
	
	    Node *temp = head;
	
	    if(position == 0){
	        head = head -> next;
	        delete temp;
	        cout << " <----- First Item Deleted.------> " << endl;
	    }
	    else {
	        Node *prev = NULL;
	        for(int i = 0; i < position; i++){
	            prev = temp;
	            temp = temp -> next;
	        }
	        prev -> next = temp -> next;
	        delete temp;
	        cout << " <----- Item Deleted at Position " << position << ". ----->" << endl;
	    }
	    count--;
	}	
}
};
int main(){
	linkedlist list;
	int ch,el,position;
		while(1){
				cout << "Press 1 for insert data"<<endl;
				cout << "press 2 for View data" <<endl;
				cout << "Press 3 for Update Data" <<endl;
				cout << "Press 4 for Delete Data "<< endl;
				cout << "Press 5 for Insert At Beginning " << endl;
				cout << "Press 6 for Reverce Data " << endl;
				cout << "Press 7 for Search Element" << endl;
				cout << "Press 0 for Exit " <<endl;
				cout << "Enter Your Choice :- ";
				cin >> ch;
				if(ch == 0){
					cout << "< - - - Thank You - - - >" << endl;
					break;
				}
				switch(ch){
					case 1:
						cout << "Enter Your Element :- ";
						cin >> el;
						list.create(el);
						cout << " <----- Succesfully Node Created ----->"<<endl;
					break;
					case 2:
						cout << " ~ ~ ~ View Node ~ ~ ~" << endl;
						list.view();
					break;	
					case 3:
						cout << "Enter Your Element :- " << endl;
						cin >> el;
						cout << "Enter Position :-" << endl;
						cin >> position;
						list.update(el , position);
					break;	
					case 4:
						cout << "Enter Position :-" << endl;
						cin >> position;
						list.deleteNode(position);
					break;	
					case 5:
						cout << "Enter Element to Insert at Beginning: ";
    					cin >> el;
						cout << " <----- Node inserted at beginning successfully ----->" << endl;
						list.insertAtBeginning(el);
					break;	
					case 6:
						cout << "<----- Linked list reversed successfully ----->" << endl;
    					list.reverse();
    				break;
					case 7:
					    cout << "Enter Element to Search: ";
					    cin >> el;
					    list.search(el);
					    break;	
					}
		}
	return 0;
}
