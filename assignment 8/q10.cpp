#include <iostream>
using namespace std;

template <class T>
class arr{
public:
    T a[100];
    int n;

    void get(){
        cout<<"Enter number of elements: ";
        cin>>n;

        cout<<"Enter elements: ";
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
    }

    void show(){
        cout<<"Array elements are: ";
        for(int i=0;i<n;i++){
            cout<<a[i]<<" ";
        }
        cout<<endl;
    }
};

int main(){
    arr<int> x;

    x.get();
    x.show();

    return 0;
}
