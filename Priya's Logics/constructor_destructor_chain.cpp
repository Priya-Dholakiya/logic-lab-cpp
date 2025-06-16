#include<iostream>
using namespace std;

class Base {
public:
    Base() { std::cout << "Base Constructor\n"; }
    virtual ~Base() { std::cout << "Base Destructor\n"; }
};
class Derived : public Base {
public:
    Derived() { std::cout << "Derived Constructor\n"; }
    ~Derived() { std::cout << "Derived Destructor\n"; }
};
void createAndDestroy() {
    Base* b = new Derived();
    delete b;
}
int main() {
    createAndDestroy();
    return 0;
}
