#include <iostream>
using namespace std;

class polygon{
public:
    int width;
    int height;

    void set_value(int w,int h){
        width = w;
        height = h;
    }

    virtual int calculate_area(){
        return 0;
    }
};

class rectangle : public polygon{
public:
    int calculate_area(){
        return width * height;
    }
};

class triangle : public polygon{
public:
    int calculate_area(){
        return (width * height) / 2;
    }
};

int main(){
    polygon *p;

    rectangle r;
    triangle t;

    int w,h;

    cout<<"Enter width and height for rectangle: ";
    cin>>w>>h;
    r.set_value(w,h);

    cout<<"Enter width and height for triangle: ";
    cin>>w>>h;
    t.set_value(w,h);

    p = &r;
    cout<<"Area of rectangle is: "<<p->calculate_area()<<endl;

    p = &t;
    cout<<"Area of triangle is: "<<p->calculate_area()<<endl;

    return 0;
}
