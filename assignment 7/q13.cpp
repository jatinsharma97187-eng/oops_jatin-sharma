#include <iostream>
#include <cmath>
using namespace std;

class cartesian;

class polar{
public:
    int r,angle;

    polar(int a,int b){
        r = a;
        angle = b;
    }

    operator cartesian();
};

class cartesian{
public:
    float x,y;

    void show(){
        cout<<"x = "<<x<<" y = "<<y<<endl;
    }
};

polar::operator cartesian(){
    cartesian c;

    c.x = r * cos(angle);
    c.y = r * sin(angle);

    return c;
}

int main(){
    polar p(10,5);

    cartesian c;

    c = p;

    c.show();

    return 0;
}
