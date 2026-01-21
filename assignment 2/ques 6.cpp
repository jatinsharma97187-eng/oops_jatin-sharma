#include <iostream>
class rectangle{
    int l,b;
    public:
    void getdata(){
        std::cout<<"enter the length:";
        std::cin>>l;
        std::cout<<"enter the breadth:";
        std::cin>>b;
    }
    void area();
};
int a=5;

int main(){
  int a=10;  
  rectangle r1;
  r1.getdata();
  r1.area();
  std::cout<<"global-"<<::a<<"\n";
  std::cout<<"local-"<<a<<"\n";
  std::cout<<"jatin";
}

void rectangle :: area(){
        int ar=l*b;
        std::cout<<"the area is: "<<ar<<"\n";
    };
