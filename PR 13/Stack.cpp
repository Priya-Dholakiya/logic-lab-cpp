#include <iostream>
using namespace std;

class Stack {
    int *arr;
    int top;
    int size;

public:
    Stack(int s) {
        size = s;
        arr = new int[size];
        top = -1;
    }

    bool isEmpty() {
        return top == -1;
    }

    bool isFull() {
        return top == size - 1;
    }

    void push(int value) {
        if (isFull()) {
            cout << "Stack is Full." << endl;
            return;
        }
        top++;
        arr[top] = value;
        cout << "Element pushed: " << value << endl;
    }

    void pop() {
        if (isEmpty()) {
            cout << "Stack is Empty." << endl;
            return;
        }
        cout << "Element popped: " << arr[top] << endl;
        top--;
    }

    void peek() {
        if (isEmpty()) {
            cout << "Stack is Empty." << endl;
        } else {
            cout << "Top Element: " << arr[top] << endl;
        }
    }

    void display() {
        if (isEmpty()) {
            cout << "Stack is Empty." << endl;
            return;
        }
        cout << "Stack Elements: ";
        for (int i = top; i >= 0; i--) {
            cout << arr[i] << " ";
        }
        cout << endl;
    }

    ~Stack() {
        delete[] arr;
    }
};

int main() {
    int size, choice, value;

    cout << "Enter size of stack: ";
    cin >> size;

    Stack st(size);

    while (true) {
        cout << endl;
        cout << "---------- MENU ----------" << endl;
        cout << "1. Push" << endl;
        cout << "2. Pop" << endl;
        cout << "3. Peek (Top)" << endl;
        cout << "4. isEmpty" << endl;
        cout << "5. isFull" << endl;
        cout << "6. Display Stack" << endl;
        cout << "0. Exit" << endl;
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
        case 1:
            cout << "Enter value to push: ";
            cin >> value;
            st.push(value);
            break;
        case 2:
            st.pop();
            break;
        case 3:
            st.peek();
            break;
        case 4:
            if (st.isEmpty())
                cout << "Stack is Empty." << endl;
            else
                cout << "Stack is Not Empty." << endl;
            break;
        case 5:
            if (st.isFull())
                cout << "Stack is Full." << endl;
            else
                cout << "Stack is Not Full." << endl;
            break;
        case 6:
            st.display();
            break;
        case 0:
            cout << "Exiting program. Thank you." << endl;
            return 0;
        default:
            cout << "Invalid choice. Please try again." << endl;
        }
    }

    return 0;
}
