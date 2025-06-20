#include<iostream>  
#include<vector>    
using namespace std; 
template <typename T>
class Student {
    T name; 
    int id; 
public:
    Student() {    
        name = T(); 
        id = 0;
    }
    Student(T n, int i) {
        name = n;
        id = i;
    }
    void display() const {
        cout << "Name: " << name << ", ID: " << id << endl;
    }
    int getId() const {    
        return id;
    }
};
int main() {
    vector<Student<string>> students; 
    int choice;
    do {
        cout << endl<< "===== Student Menu =====" << endl;
        cout << "1. Add Student" << endl;
        cout << "2. Display Students" << endl;
        cout << "3. Remove Student by ID" << endl;
        cout << "4. Search Student by ID" << endl;
        cout << "5. Exit" << endl;
        cout << "Enter your choice: ";
        cin >> choice;
        if (choice == 1) {
            string name;
            int id;
            cout << "Enter name: ";
            cin.ignore();
            getline(cin, name);
            cout << "Enter ID: ";
            cin >> id;
            students.push_back(Student<string>(name, id));
            cout << "Student added." << endl;
        }
        else if (choice == 2) {
            if (students.empty()) {
                cout << "No students to display." << endl;
            } else {
                cout << "Student List:" << endl;
                for (int i = 0; i < students.size(); i++) {
                    students[i].display(); 
                }
            }
        }
        else if (choice == 3) {
            int delId;
            bool found = false;
            cout << "Enter ID to remove: ";
            cin >> delId;
            for (int i = 0; i < students.size(); i++) {
                if (students[i].getId() == delId) {
                    students.erase(students.begin() + i);
                    cout << "Student removed." << endl;
                    found = true;
                    break;
                }
            }
            if (!found)
                cout << "Student not found." << endl;
        }
        else if (choice == 4) {
            int searchId;
            bool found = false;
            cout << "Enter ID to search: ";
            cin >> searchId;
            for (int i = 0; i < students.size(); i++) {
                if (students[i].getId() == searchId) {
                    cout << "Student found:" << endl;
                    students[i].display();
                    found = true;
                    break;
                }
            }
            if (!found)
                cout << "Student not found." << endl;
        }
        else if (choice == 5) {
            cout << "Exiting program." << endl;
        }
        else {
            cout << "Invalid choice. Try again." << endl;
        }
    } while (choice != 5);
    return 0;
}
