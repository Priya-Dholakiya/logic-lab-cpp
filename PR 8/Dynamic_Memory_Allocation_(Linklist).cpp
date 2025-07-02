// Insert At beggining , Delete Node , Search Node , Reverce Node , View Node
#include<iostream>
using namespace std;

class Node {
public:
    int data;
    Node *next;

    Node(int data) {
        this->data = data;
        this->next = NULL;
    }
};

class LinkedList {
public:
    Node *head;
    int count;

    LinkedList() {
        head = NULL;
        count = 0;
    }

    void insertAtBeginning(int data) {
        Node *newNode = new Node(data);
        newNode->next = head;
        head = newNode;
        count++;
        cout << "Node inserted at beginning." << endl;
    }

    void deleteNode(int position) {
        if (head == NULL) {
            cout << "List is empty." << endl;
            return;
        }

        if (position < 0 || position >= count) {
            cout << "Invalid position." << endl;
            return;
        }

        Node *temp = head;

        if (position == 0) {
            head = head->next;
            delete temp;
        } else {
            Node *prev = NULL;
            for (int i = 0; i < position; i++) {
                prev = temp;
                temp = temp->next;
            }
            prev->next = temp->next;
            delete temp;
        }

        count--;
        cout << "Node deleted from position " << position << "." << endl;
    }

    void search(int key) {
        Node *temp = head;
        int pos = 0;

        while (temp != NULL) {
            if (temp->data == key) {
                cout << key << " found at position: " << pos << "." << endl;
                return;
            }
            temp = temp->next;
            pos++;
        }
        cout << key << " not found in the list." << endl;
    }

    void reverse() {
        Node *prev = NULL, *curr = head, *next = NULL;

        while (curr != NULL) {
            next = curr->next;
            curr->next = prev;
            prev = curr;
            curr = next;
        }
        head = prev;
        cout << "List reversed successfully." << endl;
    }

    void view() {
        if (head == NULL) {
            cout << "List is empty." << endl;
            return;
        }
        Node *temp = head;
        cout << "Linked List: " << endl;
        while (temp != NULL) {
            cout << temp->data << " ";
            temp = temp->next;
        }
        cout << endl;
    }
};

int main() {
    LinkedList list;
    int ch, value, pos;

    while (true) {
        cout << "1. Insert at Beginning" << endl;
        cout << "2. Delete Node" << endl;
        cout << "3. Search Element" << endl;
        cout << "4. Reverse List" << endl;
        cout << "5. View List" << endl;
        cout << "0. Exit" << endl;
        cout << "Enter your choice: ";
        cin >> ch;

        switch (ch) {
            case 1:
                cout << "Enter value to insert: ";
                cin >> value;
                list.insertAtBeginning(value);
                break;

            case 2:
                cout << "Enter position to delete: ";
                cin >> pos;
                list.deleteNode(pos);
                break;

            case 3:
                cout << "Enter element to search: ";
                cin >> value;
                list.search(value);
                break;

            case 4:
                list.reverse();
                break;

            case 5:
                list.view();
                break;

            case 0:
                cout << "Exiting... Thank You!" << endl;
                return 0;

            default:
                cout << "Invalid choice." << endl;
        }
    }
    return 0;
}
