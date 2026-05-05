#include <iostream>
using namespace std;

class sample{
public:
    void operator()(int a){
        cout<<"One value: "<<a<<endl;
    }

    void operator()(int a,int b){
        cout<<"Two values: "<<a<<" "<<b<<endl;
    }

    void operator()(int a,int b,int c){
        cout<<"Three values: "<<a<<" "<<b<<" "<<c<<endl;
    }
};

int main(){
    sample s;

    s(5);
    s(5,10);
    s(5,10,15);

    return 0;
}
