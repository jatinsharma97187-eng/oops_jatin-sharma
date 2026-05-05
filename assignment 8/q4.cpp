#include <iostream>
using namespace std;

template <class T>
int search(T a[], int n, T key){
    for(int i=0;i<n;i++){
        if(a[i] == key){
            return i;
        }
    }
    return -1;
}

int main(){
    int n;

    cout<<"Enter number of elements: ";
    cin>>n;

    int a[100];

    cout<<"Enter elements: ";
    for(int i=0;i<n;i++){
        cin>>a[i];
    }

    int key;
    cout<<"Enter element to search: ";
    cin>>key;

    int pos = search(a,n,key);

    if(pos == -1)
        cout<<"Element not found"<<endl;
    else
        cout<<"Element found at index: "<<pos<<endl;

    return 0;
}
