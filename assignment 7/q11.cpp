#include <iostream>
using namespace std;

class test{
public:
    float x;

    test(float f){
        x = f;
    }

    void show(){
        cout<<"Value is: "<<x<<endl;
    }
};

int main(){
    float a;

    cout<<"Enter float value: ";
    cin>>a;

    test t = a;

    t.show();

    return 0;
}
