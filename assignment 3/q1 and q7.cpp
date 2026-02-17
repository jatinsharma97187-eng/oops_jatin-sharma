#include <iostream>
using namespace std;

class Student
{
    int marks;

public:
    void input()
    {
        cout<<"Enter marks: ";
        cin>>marks;
    }

    void show()
    {
        cout<<"Marks = "<<this->marks<<endl;   // using this pointer
    }

    // pass by value
    Student add5_value(Student s)
    {
        s.marks = s.marks + 5;
        return s;
    }

    // pass by reference
    void add5_ref(Student &s)
    {
        s.marks = s.marks + 5;
    }
};

int main()
{
    Student s1, s2;
    s1.input();

    // pointer to object
    Student *ptr = &s1;
    cout<<"Using pointer -> ";
    ptr->show();

    // pass by value
    s2 = s1.add5_value(s1);
    cout<<"After pass by value (new object): ";
    s2.show();

    // pass by reference
    s1.add5_ref(s1);
    cout<<"After pass by reference (original changed): ";
    s1.show();

    return 0;
}

