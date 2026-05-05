#include <iostream>
using namespace std;

class test{
public:
    float x;

    void get(){
        cout<<"Enter value: ";
        cin>>x;
    }

    operator float(){
        return x;
    }
};

int main(){
    test t;

    t.get();

    float a;

    a = t;

    cout<<"Converted value is: "<<a<<endl;

    return 0;
}
