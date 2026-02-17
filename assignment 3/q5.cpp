#include <iostream>
using namespace std;

class Rectangle
{
    float l,b,area;

public:
    void input()
    {
        cout<<"Enter length:";
        cin>>l;
        cout<<"enter breadth:";
        cin>>b;
    }

    void calc()
    {
        area = l*b;
    }

    void show(int i)
    {
        cout<<"Rectangle "<<i+1<<" Area = "<<area<<endl;
    }
};

int main()
{
    int n;
    cout<<"How many rectangles: ";
    cin>>n;

    Rectangle r[n];

    for(int i=0;i<n;i++)
    {
        r[i].input();
        r[i].calc();
    }

    cout<<"\nAreas:\n";
    for(int i=0;i<n;i++)
        r[i].show(i);

    return 0;
}

