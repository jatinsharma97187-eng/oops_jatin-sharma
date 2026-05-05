#include <iostream>
using namespace std;

class arr{
public:
    int a[5];

    void get(){
        cout<<"Enter 5 elements: ";
        for(int i=0;i<5;i++){
            cin>>a[i];
        }
    }

    int operator [] (int i){
        if(i<0 || i>=5){
            cout<<"Index out of bounds"<<endl;
            return -1;
        }
        return a[i];
    }
};

int main(){
    arr x;

    x.get();

    int i;
    cout<<"Enter index: ";
    cin>>i;

    cout<<"Value is: "<<x[i]<<endl;

    return 0;
}
