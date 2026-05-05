#include <iostream>
using namespace std;

class Base {
public:
    void display() {
        cout << "Base class function\n";
    }
};

class Derived : public Base {
public:
    void show() {
        cout << "Derived class function\n";
    }
};

int main() {
    Base obj1;
    Derived obj2;
    obj1.display();
    obj2.display();
    obj2.show();
    return 0;
}
