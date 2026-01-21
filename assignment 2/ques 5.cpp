#include <iostream>
using namespace std;

class complex {
    float a, b;

public:
    void setcomplex(float r, float i) {
        a = r;
        b = i;
    }

    void displaycomplex() {
        cout << a << " + i" << b << endl;
    }

    complex add(complex c2) {
        complex temp;
        temp.a = a + c2.a;
        temp.b = b + c2.b;
        return temp;
    }
};

int main() {
    complex c1, c2, c3;

    c1.setcomplex(1.0, 2.0);
    c2.setcomplex(3.0, 4.0);

    c3 = c1.add(c2);

    cout << "First complex number: ";
    c1.displaycomplex();

    cout << "Second complex number: ";
    c2.displaycomplex();

    cout << "Sum of complex numbers: ";
    c3.displaycomplex();

    return 0;
}
