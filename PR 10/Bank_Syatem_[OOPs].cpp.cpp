#include<iostream>
using namespace std;

class BankAccount {
private:
    string name;
    int accNumber;
    float balance;
public:
    void createAccount() {
        cout <<endl << "--- Welcome to Varachha Co-op Bank ---"<<endl;
        cout << "Enter Account Holder Name: ";
        cin >> name;
        cout << "Enter Account Number : ";
        cin >> accNumber;
        cout << "Enter Initial Deposit Amount: ";
        cin >> balance;
        cout << "Account Created Successfully!"<<endl;
    }
    void depositMoney() {
        float amount;
        cout << "Enter amount to deposit: ";
        cin >> amount;
        if (amount > 0) {
            balance += amount;
            cout << "Amount deposited successfully!"<<endl;
        } else {
            cout << "Invalid amount."<<endl;
        }
    }
    void withdrawMoney() {
        float amount;
        cout << "Enter amount to withdraw: ";
        cin >> amount;
        if (amount > 0 && amount <= balance) {
            balance -= amount;
            cout << "Amount withdrawn successfully!"<<endl;
        } else {
            cout << "Insufficient balance or invalid amount."<<endl;
        }
    }
    void checkBalance() {
        cout <<endl <<"--- Account Details ---"<<endl;
        cout << "Name: " << name << endl;
        cout << "Account Number: " << accNumber <<endl;
        cout << "Current Balance: Rs." << balance <<endl;
    }
    int getAccountNumber() {
        return accNumber;
    }
};
int main() {
	int max=100;
    BankAccount accounts[max];
    int totalAccounts = 0;
    int choice;
    while (true) {
        cout <<endl << "===== Varachha Co-op Bank Menu =====" <<endl;
        cout << "1. Create Account" <<endl;
        cout << "2. Deposit Money" <<endl;
        cout << "3. Withdraw Money" <<endl;
        cout << "4. Check Balance" <<endl;
        cout << "5. Exit"<<endl;
        cout << "Enter your choice: ";
        cin >> choice;
        int accNum;
        int i;
        switch (choice) {
            case 1:
                if (totalAccounts < max) {
                    accounts[totalAccounts].createAccount();
                    totalAccounts++;
                } else {
                    cout << "Account limit reached." <<endl;
                }
                break;
            case 2:
                cout << "Enter Account Number: ";
                cin >> accNum;
                for (i = 0; i < totalAccounts; i++) {
                    if (accounts[i].getAccountNumber() == accNum) {
                        accounts[i].depositMoney();
                        break;
                    }
                }
                if (i == totalAccounts) cout << "Account not found." <<endl;
                break;
            case 3:
                cout << "Enter Account Number: ";
                cin >> accNum;
                for (i = 0; i < totalAccounts; i++) {
                    if (accounts[i].getAccountNumber() == accNum) {
                        accounts[i].withdrawMoney();
                        break;
                    }
                }
                if (i == totalAccounts) cout << "Account not found."<<endl;
                break;
            case 4:
                cout << "Enter Account Number: ";
                cin >> accNum;
                for (i = 0; i < totalAccounts; i++) {
                    if (accounts[i].getAccountNumber() == accNum) {
                        accounts[i].checkBalance();
                        break;
                    }
                }
                if (i == totalAccounts) cout << "Account not found."<<endl;
                break;
            case 5:
                cout << "Thank you for using Varachha Co-op Bank!"<<endl;
                return 0;
            default:
                cout << "Invalid choice. Try again."<<endl;
        }
    }
    return 0;
}

