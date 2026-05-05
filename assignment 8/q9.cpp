#include <iostream>
using namespace std;

template <class T>
class calc{
public:
    T a,b;

    void get(){
        cout<<"Enter first value: ";
        cin>>a;
        cout<<"Enter second value: ";
        cin>>b;
    }

    void show(){
        cout<<"Addition is: "<<a+b<<endl;
        cout<<"Subtraction is: "<<a-b<<endl;
        cout<<"Multiplication is: "<<a*b<<endl;
        cout<<"Division is: "<<a/b<<endl;
    }
};

int main(){
    calc<int> c;

    c.get();
    c.show();

    return 0;
}
