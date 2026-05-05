#include <iostream>
using namespace std;

class Base {
public:
    int x;
};

class PublicDerived : public Base { };
class ProtectedDerived : protected Base { };
class PrivateDerived : private Base { };

int main() {
    PublicDerived obj1;
    obj1.x = 5;
    cout << obj1.x << endl;
    return 0;
}
