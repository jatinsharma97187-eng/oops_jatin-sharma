#include <iostream>
#include <cmath>
using namespace std;

class area{
public:
    double find(int b,int h){
        return (b*h)/2.0;
    }

    double find(int a){
        return (1.732*a*a)/4;
    }

    double find(int a,int b,int c){
        double s = (a+b+c)/2.0;
        return sqrt(s*(s-a)*(s-b)*(s-c));
    }
};

int main(){
    area a;

    int b,h;
    cout<<"Enter base and height for right angle triangle: ";
    cin>>b>>h;
    cout<<"Area is: "<<a.find(b,h)<<endl;

    int side;
    cout<<"Enter side for equilateral triangle: ";
    cin>>side;
    cout<<"Area is: "<<a.find(side)<<endl;

    int x,y,z;
    cout<<"Enter three sides for isosceles triangle: ";
    cin>>x>>y>>z;
    cout<<"Area is: "<<a.find(x,y,z)<<endl;

    return 0;
}
