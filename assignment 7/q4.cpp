#include <iostream>
using namespace std;

class student{
public:
    virtual void display() = 0;
};

class engineering : public student{
public:
    void display(){
        cout<<"Engineering student"<<endl;
    }
};

class medicine : public student{
public:
    void display(){
        cout<<"Medicine student"<<endl;
    }
};

class science : public student{
public:
    void display(){
        cout<<"Science student"<<endl;
    }
};

int main(){
    student *s[3];

    engineering e;
    medicine m;
    science sc;

    s[0] = &e;
    s[1] = &m;
    s[2] = &sc;

    for(int i=0;i<3;i++){
        s[i]->display();
    }

    return 0;
}
