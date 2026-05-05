#include <iostream>
#include <fstream>
using namespace std;

class student{
public:
    int roll;
    char name[20];

    void get(){
        cout<<"Enter roll: ";
        cin>>roll;
        cout<<"Enter name: ";
        cin>>name;
    }

    void show(){
        cout<<"Roll: "<<roll<<endl;
        cout<<"Name: "<<name<<endl;
    }
};

int main(){
    student s;

    ofstream f("data.dat", ios::binary);

    s.get();
    f.write((char*)&s, sizeof(s));
    f.close();

    ifstream f2("data.dat", ios::binary);
    f2.read((char*)&s, sizeof(s));

    cout<<"Data from file:"<<endl;
    s.show();

    f2.close();

    return 0;
}
