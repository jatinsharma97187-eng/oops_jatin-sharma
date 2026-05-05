#include <iostream>
using namespace std;

template <class T>
class queue{
public:
    T a[100];
    int f = 0, r = -1;

    void enqueue(T x){
        r++;
        a[r] = x;
    }

    void dequeue(){
        if(f > r){
            cout<<"Queue is empty"<<endl;
        }
        else{
            cout<<"Deleted element is: "<<a[f]<<endl;
            f++;
        }
    }
};

int main(){
    queue<int> q;

    int n;
    cout<<"Enter number of elements to insert: ";
    cin>>n;

    for(int i=0;i<n;i++){
        int x;
        cout<<"Enter value to insert: ";
        cin>>x;
        q.enqueue(x);
    }

    int k;
    cout<<"Enter number of elements to delete: ";
    cin>>k;

    for(int i=0;i<k;i++){
        q.dequeue();
    }

    return 0;
}
