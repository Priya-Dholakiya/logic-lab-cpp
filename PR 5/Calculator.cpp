#include<iostream>
using namespace std;

int sum(int a, int b);
int sub(int a, int b);
int mul(int a, int b);
int div(int a, int b);
int modulo(int a, int b);

main() {
    int a, b, choice;
    while (1) {
        cout << endl << endl << "Enter Press 1 for + " << endl;
        cout << "Enter Press 2 for - " << endl;
        cout << "Enter Press 3 for * " << endl;
        cout << "Enter Press 4 for / " << endl;
        cout << "Enter Press 5 for % " << endl;
        cout << "Enter Press 0 to Exit" << endl << endl;
        cin >> choice;

        if (choice == 0) {
            cout << "Thanks for using Priya's Calculator :)" << endl;
            break;
        }

        cout << "Enter no A :- ";
        cin >> a;
        cout << "Enter no B :- ";
        cin >> b;

        switch (choice) {
            case 1:
                cout << "Sum :- " << sum(a, b) << endl << endl;
                break;
            case 2:
                cout << "Sub :- " << sub(a, b) << endl << endl;
                break;
            case 3:
                cout << "Mul :- " << mul(a, b) << endl << endl;
                break;
            case 4:
                cout << "Div :- " << div(a, b) << endl << endl;
                break;
            case 5:
                cout << "Modulo :- " << modulo(a, b) << endl << endl;
                break;
            default:
                cout << "Not valid choice" << endl << endl;
        }
        cout << "-------------------------------------------------------------------------------------------------------------";
    }
}

int sum(int a, int b) {
    return a + b;
}

int sub(int a, int b) {
    return a - b;
}

int mul(int a, int b) {
    return a * b;
}

int div(int a, int b) {
    if (b == 0) {
        cout << "Cannot divide by zero" << endl << endl;
        return 0;
    }
    return a / b;
}

int modulo(int a, int b) {
    if (b == 0) {
        cout << "Cannot modulo by zero" << endl << endl;
        return 0;
    }
    return a % b;
}
