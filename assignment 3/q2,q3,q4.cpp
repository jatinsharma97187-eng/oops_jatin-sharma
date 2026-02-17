#include <iostream>
using namespace std;
class B;
class A
{
    int x;

public:
    void input()
    {
        cout<<"Enter value for A: ";
        cin>>x;
    }

    friend void swapData(A&,B&);
    friend int add(A,B);
    friend class Checker;
};

class B
{
    int y;

public:
    void input()
    {
        cout<<"Enter value for B: ";
        cin>>y;
    }

    friend void swapData(A&,B&);
    friend int add(A,B);
    friend class Checker;
};

// Q2 swap private data
void swapData(A &a,B &b)
{
    int temp = a.x;
    a.x = b.y;
    b.y = temp;
}

// Q3 add objects
int add(A a,B b)
{
    return a.x + b.y;
}

// Q4 friend class
class Checker
{
public:
    void compare(A a,B b)
    {
        if(a.x > b.y)
            cout<<"A is greater"<<endl;
        else
            cout<<"B is greater or equal"<<endl;
    }
};

int main()
{
    A a;
    B b;

    a.input();
    b.input();

    cout<<"Sum = "<<add(a,b)<<endl;

    swapData(a,b);
    cout<<"After swap, Sum = "<<add(a,b)<<endl;

    Checker c;
    c.compare(a,b);

    return 0;
}

