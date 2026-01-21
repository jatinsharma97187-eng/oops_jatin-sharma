#include <iostream>
using namespace std;
class rectangle{
    int l,b;
    void read(){
        cout<<"the length and breadth are: {"<<l<<","<<b<<"}"<<endl;
    }
    public:
    void getdata(){
        cout<<"enter the length:";
        cin>>l;
        cout<<"enter the breadth:";
        cin>>b;
        read();
    }
    void area(){
        int ar=l*b;
        cout<<"the area is: "<<ar<<endl;
    }
};

int main()
{
  rectangle r1;
  r1.getdata();
  r1.area();
  cout<<"jatin"<<endl;
}
