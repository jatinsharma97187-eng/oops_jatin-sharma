#include <iostream>
using namespace std;

class B;

class A{
public:
    int x;

    void get(){
        cout<<"Enter value for first object: ";
        cin>>x;
    }

    friend int add(A, B);
};

class B{
public:
    int y;

    void get(){
        cout<<"Enter value for second object: ";
        cin>>y;
    }

    friend int add(A, B);
};

int add(A a, B b){
    return a.x + b.y;
}

int main(){
    A a;
    B b;

    a.get();
    b.get();

    int result = add(a,b);

    cout<<"Sum of both objects is: "<<result<<endl;

    return 0;
}
