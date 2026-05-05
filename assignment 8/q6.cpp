#include <iostream>
using namespace std;

template <class T>
class stack{
public:
    T a[100];
    int top = -1;

    void push(T x){
        top++;
        a[top] = x;
    }

    void pop(){
        if(top == -1){
            cout<<"Stack is empty"<<endl;
        }
        else{
            cout<<"Popped element is: "<<a[top]<<endl;
            top--;
        }
    }
};

int main(){
    stack<int> s;
#include <iostream>
using namespace std;

template <class T>
class stack{
public:
    T a[100];
    int top = -1;

    void push(T x){
        top++;
        a[top] = x;
    }

    void pop(){
        if(top == -1){
            cout<<"Stack is empty"<<endl;
        }
        else{
            cout<<"Popped element is: "<<a[top]<<endl;
            top--;
        }
    }
};

int main(){
    stack<int> s;

    int n;
    cout<<"Enter number of elements to push: ";
    cin>>n;

    for(int i=0;i<n;i++){
        int x;
        cout<<"Enter value to push: ";
        cin>>x;
        s.push(x);
    }

    int k;
    cout<<"Enter number of elements to pop: ";
    cin>>k;

    for(int i=0;i<k;i++){
        s.pop();
    }

    return 0;
}
    s.push(10);
    s.push(20);
    s.push(30);

    s.pop();
    s.pop();

    return 0;
}
