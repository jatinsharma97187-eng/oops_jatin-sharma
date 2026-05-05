#include <iostream>
using namespace std;

template <class T>
class pairval{
public:
    T a,b;

    void get(){
        cout<<"Enter first value: ";
        cin>>a;
        cout<<"Enter second value: ";
        cin>>b;
    }

    void show(){
        cout<<"Values are: "<<a<<" "<<b<<endl;
    }
};

int main(){
    pairval<int> p;

    p.get();
    p.show();

    return 0;
}
