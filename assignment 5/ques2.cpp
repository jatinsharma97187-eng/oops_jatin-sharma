#include <iostream>
using namespace std;

class Base {
protected:
    int value;
public:
    Base() {
        value = 10;
    }
};

class Derived : public Base {
public:
    void display() {
        cout << "Value: " << value << endl;
    }
};

int main() {
    Derived obj;
    obj.display();
    return 0;
}
