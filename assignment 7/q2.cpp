#include <iostream>
using namespace std;

class shape{
public:
    virtual void area(){
    }

    virtual void display(){
    }
};

class circle : public shape{
public:
    int r;

    void get(){
        cout<<"Enter radius of circle: ";
        cin>>r;
    }

    void area(){
        cout<<"Area of circle is: "<<3.14*r*r<<endl;
    }

    void display(){
        cout<<"This is circle"<<endl;
    }
};

class rectangle : public shape{
public:
    int l,b;

    void get(){
        cout<<"Enter length and breadth of rectangle: ";
        cin>>l>>b;
    }

    void area(){
        cout<<"Area of rectangle is: "<<l*b<<endl;
    }

    void display(){
        cout<<"This is rectangle"<<endl;
    }
};

class triangle : public shape{
public:
    int b,h;

    void get(){
        cout<<"Enter base and height of triangle: ";
        cin>>b>>h;
    }

    void area(){
        cout<<"Area of triangle is: "<<(b*h)/2<<endl;
    }

    void display(){
        cout<<"This is triangle"<<endl;
    }
};

int main(){
    circle c;
    rectangle r;
    triangle t;

    c.get();
    c.display();
    c.area();

    r.get();
    r.display();
    r.area();

    t.get();
    t.display();
    t.area();

    return 0;
}
