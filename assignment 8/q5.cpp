#include <iostream>
using namespace std;

template <class T>
void process(T a){
    cout<<"Single value: "<<a<<endl;
}

template <class T>
void process(T a, T b){
    cout<<"Two values of same type: "<<a<<" "<<b<<endl;
}

template <class T1, class T2>
void process(T1 a, T2 b){
    cout<<"Two values of different types: "<<a<<" "<<b<<endl;
}

int main(){
    process(5);
    process(5,10);
    process(5,3.5);

    return 0;
}
