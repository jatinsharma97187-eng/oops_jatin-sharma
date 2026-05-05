#include <iostream>
using namespace std;

template <class T>
T findmin(T a[], int n){
    T min = a[0];

    for(int i=1;i<n;i++){
        if(a[i] < min){
            min = a[i];
        }
    }

    return min;
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

    cout<<"Minimum element is: "<<findmin(a,n)<<endl;

    return 0;
}
