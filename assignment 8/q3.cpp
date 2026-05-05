#include <iostream>
using namespace std;

template <typename T>

void bubblesort(T arr[], int len){
    for(int i=0;i<len-1;i++){
        for(int j=0;j<len-i-1;j++){
            if(arr[j]>arr[j+1]){
                T temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
    }
}

int main()
{
    int n1;
    cout<<"enter length of array:";
    cin>>n1;
    string ar[n1];
    for(int i=0;i<n1;i++){
        cout<<"enter string "<<i<<" of array:";
        cin>>ar[i];
    }
    bubblesort(ar,n1);
    cout<<"the array after sorting:( ";
    for(int i=0;i<n1;i++){
        cout<<ar[i]<<",";
    }
    cout<<")"<<endl;
    
    
    

    return 0;
}
