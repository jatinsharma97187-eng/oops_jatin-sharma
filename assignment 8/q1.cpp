#include <iostream>
using namespace std;

template <typename T>

void swapnum(T &a, T&b){
    T temp=a;
    a=b;
    b=temp;
    
}

int main()
{
    int n1,n2;
    cout<<"enter number 1:";
    cin>>n1;
    cout<<"enter number 2:";
    cin>>n2;
    swapnum(n1,n2);
    cout<<"the numbers are swapped, now n1="<<n1<<" and n2="<<n2<<endl;
    
    

    return 0;
}
