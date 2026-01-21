#include <iostream>
using namespace std;

namespace First {
    int x = 10;

    void show() {
        cout << "First namespace x = " << x << endl;
    }
}

namespace Second {
    int x = 20;

    void show() {
        cout << "Second namespace x = " << x << endl;
    }
}

int main() {
    First::show();
    Second::show();

    cout << "First x = " << First::x << endl;
    cout << "Second x = " << Second::x << endl;

    return 0;
}

