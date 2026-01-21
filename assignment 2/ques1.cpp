#include<iostream>
#include<string>
using namespace std;

struct student{
    string name;
    int roll;
    string hostel;
    string degree;
    float cg;

    void add(){
        cout<<"enter the name of student: ";
        cin>>name;
        cout<<"enter the roll number: ";
        cin>>roll;
        cout<<"enter hostel: ";
        cin>>hostel;
        cout<<"enter degree: ";
        cin>>degree;
        cout<<"enter current cgpa: ";
        cin>>cg;
    }

    void display(){
        cout<<"name: "<<name<<endl;
        cout<<"roll: "<<roll<<endl;
        cout<<"hostel: "<<hostel<<endl;
        cout<<"degree: "<<degree<<endl;
        cout<<"cgpa: "<<cg<<endl;
    }

    void update_hostel(){
        string h;
        cout<<"enter new hostel: ";
        cin >> h;
        hostel = h;
    }

    void update_details(){
        string n,d;
        int r;
        cout<<"enter new name: ";
        cin>>n;
        cout<<"enter new roll number: ";
        cin>>r;
        cout<<"enter new degree: ";
        cin>>d;
        name=n;roll=r;degree=d;
    }

    void update_cg(){
        float c;
        cout<<"enter new cg: ";
        cin >> c;
        cg = c;
    }
};

int main(){
    int n;
    cout<<"enter the number of students: ";
    cin>>n;

    student s[n]; 

    for(int i=0;i<n;i++){
        cout<<"\nenter details of student "<<i+1<<":\n";
        s[i].add();
    }

    cout<<"\nDisplaying details:\n";
    for(int i=0;i<n;i++){
        cout<<"\nStudent "<<i+1<<":\n";
        s[i].display();
    }

    return 0;
}

