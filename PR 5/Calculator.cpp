#include<iostream>
#include<iomanip>  // for fixed & setprecision
using namespace std;

int add(int a, int b);
int sub(int a, int b);
int mul(int a, int b);
float div(int a, int b);
int modulo(int a, int b);

main() {
    int a, b, choice;

    cout << fixed << setprecision(2); 

    while (1) {
    	cout<< "*********** PRIYA'S CALCULATOR ************" <<endl <<endl;
        cout << " 1. [+]  Addition "<<endl;
        cout << " 2. [-]  Subtraction " <<endl;
        cout << " 3. [*]  Multiplication " <<endl;
        cout << " 4. [/]  Division " <<endl;
        cout << " 5. [%]  Modulo " <<endl;
        cout << " 0. [-->]  Exit " <<endl;
        cout << "=========================================\n";
        cout << " Enter your choice (0-5): ";
        cin >> choice;

        if (choice == 0) {
            cout  <<endl << " Thanks for using Priya's Calculator. Bye!!!" <<endl;
            break;
        }

        cout  <<endl << " Enter number A: ";
        cin >> a;
        cout << " Enter number B: ";
        cin >> b;

        cout  <<endl << "-----------------------------------------" <<endl;

        switch (choice) {
            case 1:
                cout << "  Result (A + B) = " << add(a, b) <<endl;
                break;
            case 2:
                cout << "  Result (A - B) = " << sub(a, b) <<endl;
                break;
            case 3:
                cout << "  Result (A * B) = " << mul(a, b) <<endl;
                break;
            case 4:
                if (b == 0)
                    cout << "  Error: Cannot divide by zero." <<endl;
                else
                    cout << "  Result (A / B) = " << div(a, b) <<endl;
                break;
            case 5:
                if (b == 0)
                    cout << "  Error: Cannot modulo by zero." <<endl;
                else
                    cout << "  Result (A % B) = " << modulo(a, b) <<endl;
                break;
            default:
                cout << "   Invalid choice. Please select from 0 to 5." <<endl;
        }

        cout << "-----------------------------------------" <<endl;
    }
}

int add(int a, int b) {
    return a + b;
}

int sub(int a, int b) {
    return a - b;
}

int mul(int a, int b) {
    return a * b;
}

float div(int a, int b) {
    return (float)a / b;
}

int modulo(int a, int b) {
    return a % b;
}

