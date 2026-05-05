#include <iostream>
using namespace std;

class A {
public:
    void show() { cout << "Inheritance Example\n"; }
};

class B : public A { };
class C : public A { };
class D : public B { };
class E { };

class F : public A, public E { };

int main() {
    B obj1;
    C obj2;
    D obj3;
    F obj4;
    obj1.show();
    obj2.show();
    obj3.show();
    obj4.show();
    return 0;
}
