#include <iostream>
using namespace std;

class rectangle {
    int length;
    int breadth;

public:
    rectangle(int a = 0, int b = -1) {
        length = a;
        if (b == -1)
            breadth = a;
        else
            breadth = b;
    }

    int area() {
        return length * breadth;
    }

    // (i) Name begins with ~ and matches class name ? rectangle
    // (ii) Only one destructor allowed in a class ? this is the only one
    // (iii) No parameters allowed in destructor ? empty brackets ()
    // (iv) No return type (not even void) ? correct syntax
    ~rectangle() {   
        cout << "Destructor called for rectangle with area: "
             << length * breadth << endl;
    }
};

int main() {

    // array of objects ? constructors called automatically
    rectangle r[3]={{10,20},{10},{}};  
    // r[0] -> rectangle(10,20)
    // r[1] -> rectangle(10)  (square)
    // r[2] -> rectangle()    (default values)

    cout << "area of r1 is: " << r[0].area() << endl;
    cout << "area of r2 is: " << r[1].area() << endl;
    cout << "area of r3 is: " << r[2].area() << endl;

    // When program ends ? destructors called automatically
    // in reverse order: r[2], r[1], r[0]
}

