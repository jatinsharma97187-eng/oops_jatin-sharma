#include <iostream>
#include <string>
using namespace std;

class STRING{
public:
    string s;

    void get(){
        cout<<"Enter string: ";
        getline(cin,s);
    }

    bool operator == (STRING t){
        return s == t.s;
    }

    STRING operator + (STRING t){
        STRING temp;
        temp.s = s + t.s;
        return temp;
    }

    void show(){
        cout<<s<<endl;
    }
};

int main(){
    STRING a,b,c;

    a.get();
    b.get();

    if(a==b)
        cout<<"Strings are equal"<<endl;
    else
        cout<<"Strings are not equal"<<endl;

    c = a + b;

    cout<<"Concatenated string: ";
    c.show();

    return 0;
}
