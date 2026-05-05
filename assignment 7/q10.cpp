#include <iostream>
using namespace std;

class student{
public:
    int roll;
    string name;

    friend istream& operator>>(istream &in, student &s);
    friend ostream& operator<<(ostream &out, student &s);
};

istream& operator>>(istream &in, student &s){
    cout<<"Enter roll number: ";
    in>>s.roll;
    cout<<"Enter name: ";
    in>>s.name;
    return in;
}

ostream& operator<<(ostream &out, student &s){
    out<<"Roll number is: "<<s.roll<<endl;
    out<<"Name is: "<<s.name<<endl;
    return out;
}

int main(){
    student s;

    cin>>s;
    cout<<s;

    return 0;
}
