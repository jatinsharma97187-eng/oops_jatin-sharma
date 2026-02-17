#include <iostream>
using namespace std;

class rectangle {
    int length;
    int breadth;

public:
    rectangle(int a = 0, int b = -1) {
        length = a;
        if (b == -1)
            breadth = a;
        else
            breadth = b;
    }

    int area() {
        return length * breadth;
    }

    ~rectangle() {
        cout<<"Destructor called, area = "<<length*breadth<<endl;
    }
};

int main() {

    //int variable
    int *ip = new int;
    cout<<"Enter integer: ";
    cin>>*ip;
    cout<<"Integer = "<<*ip<<endl;
    delete ip;


    //float variable
    float *fp = new float;
    cout<<"\nEnter float: ";
    cin>>*fp;
    cout<<"Float = "<<*fp<<endl;
    delete fp;


    //int array
    int n;
    cout<<"\nEnter size of int array: ";
    cin>>n;

    int *arr = new int[n];
    for(int i=0;i<n;i++)
    {
        cout<<"Enter element "<<i+1<<": ";
        cin>>arr[i];
    }

    cout<<"Array: ";
    for(int i=0;i<n;i++)
        cout<<arr[i]<<" ";

    delete[] arr;


    //float array
    cout<<"\n\nEnter size of float array: ";
    cin>>n;

    float *farr = new float[n];
    for(int i=0;i<n;i++)
    {
        cout<<"Enter element "<<i+1<<": ";
        cin>>farr[i];
    }

    cout<<"Float Array: ";
    for(int i=0;i<n;i++)
        cout<<farr[i]<<" ";

    delete[] farr;


    //single object
    rectangle *r1 = new rectangle(10,20);
    cout<<"\n\nArea of single object = "<<r1->area()<<endl;
    delete r1;


    //array of objects
    cout<<"\nEnter number of rectangles: ";
    cin>>n;

    rectangle **r = new rectangle*[n];

    for(int i=0;i<n;i++)
    {
        int l,b;
        cout<<"Enter length and breadth "<<i+1<<": ";
        cin>>l>>b;

        r[i] = new rectangle(l,b);
    }

    cout<<"\nAreas:\n";
    for(int i=0;i<n;i++)
        cout<<"Area "<<i+1<<" = "<<r[i]->area()<<endl;

    for(int i=n-1;i>=0;i--)
        delete r[i];

    delete[] r;

}

