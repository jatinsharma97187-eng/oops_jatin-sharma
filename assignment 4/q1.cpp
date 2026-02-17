#include <iostream>
using namespace std;

class rectangle{
    int length;
    int breadth;
public: rectangle (int a=0,int b=-1){ 
    length=a; 
    if(b==-1){
        breadth=a;
    }
    else{
        breadth=b;
    }
    
    }
    int area(){
        return length*breadth;
    }    
};

int main(){
    rectangle r1(10,20);
    int a1= r1.area();
    cout<<"area of r1 is "<<a1<<endl;
    
    rectangle r2(10);
    int a2= r2.area();
    cout<<"area of r2 is "<<a2<<endl;
    
    rectangle r3;
    int a3= r3.area();
    cout<<"area of r3 is "<<a3<<endl;
}
