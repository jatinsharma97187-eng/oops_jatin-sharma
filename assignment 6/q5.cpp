#include <iostream>
using namespace std;

class complex{
public:
    int real;
    int imag;

    complex(int r, int i){
        real = r;
        imag = i;
    }

    complex(const complex &c){
        real = c.real;
        imag = c.imag;
    }

    void display(){
        cout<<real<<" + "<<imag<<"i"<<endl;
    }

    friend complex sum(complex, complex);
};

complex sum(complex c1, complex c2){
    complex temp(0,0);
    temp.real = c1.real + c2.real;
    temp.imag = c1.imag + c2.imag;
    return temp;
}

int main(){
    int r,i;

    cout<<"Enter real and imaginary part of first number: ";
    cin>>r>>i;
    complex c1(r,i);

    cout<<"Enter real and imaginary part of second number: ";
    cin>>r>>i;
    complex c2(r,i);

    complex c3 = sum(c1,c2);

    cout<<"First complex number: ";
    c1.display();

    cout<<"Second complex number: ";
    c2.display();

    cout<<"Sum of complex numbers: ";
    c3.display();

    return 0;
}
