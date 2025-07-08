#include <iostream>
using namespace std;

class Queue {
    int *arr;
    int front, rear, size;

public:
    Queue(int s) {
        size = s;
        arr = new int[size];
        front = -1;
        rear = -1;
    }

    bool isEmpty() {
        return (front == -1 || front > rear);
    }

    bool isFull() {
        return (rear == size - 1);
    }

    void enqueue(int val) {  // Push
        if (isFull()) {
            cout << "Queue is Full!" << endl;
            return;
        }

        if (isEmpty()) {
            front = rear = 0;
        } else {
            rear++;
        }

        arr[rear] = val;
        cout << "Element Inserted: " << val << endl;
    }

    void dequeue() {  // Pop
        if (isEmpty()) {
            cout << "Queue is Empty!" << endl;
            return;
        }

        cout << "Element Removed: " << arr[front] << endl;
        front++;
    }

    void peek() {  // Top
        if (isEmpty()) {
            cout << "Queue is Empty!" << endl;
        } else {
            cout << "Front Element: " << arr[front] << endl;
        }
    }

    void display() {
        if (isEmpty()) {
            cout << "Queue is Empty!" << endl;
            return;
        }

        cout << "Queue Elements: ";
        for (int i = front; i <= rear; i++) {
            cout << arr[i] << " ";
        }
        cout << endl;
    }

    ~Queue() {
        delete[] arr;
    }
};

int main() {
    int size, choice, value;

    cout << "Enter size of queue: ";
    cin >> size;

    Queue q(size);

    while (true) {
        cout << "\n--- MENU ---" << endl;
        cout << "1. Enqueue (Push)" << endl;
        cout << "2. Dequeue (Pop)" << endl;
        cout << "3. Peek (Front/Top)" << endl;
        cout << "4. Check isEmpty" << endl;
        cout << "5. Check isFull" << endl;
        cout << "6. Display Queue" << endl;
        cout << "0. Exit" << endl;
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
        case 1:
            cout << "Enter value to enqueue: ";
            cin >> value;
            q.enqueue(value);
            break;
        case 2:
            q.dequeue();
            break;
        case 3:
            q.peek();
            break;
        case 4:
            if (q.isEmpty())
                cout << "Queue is Empty." << endl;
            else
                cout << "Queue is Not Empty." << endl;
            break;
        case 5:
            if (q.isFull())
                cout << "Queue is Full." << endl;
            else
                cout << "Queue is Not Full." << endl;
            break;
        case 6:
            q.display();
            break;
        case 0:
            cout << "Exiting... Thank you!" << endl;
            return 0;
        default:
            cout << "Invalid choice!" << endl;
        }
    }

    return 0;
}
