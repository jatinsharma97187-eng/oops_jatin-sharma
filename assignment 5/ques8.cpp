#include <iostream>
using namespace std;

class LibraryUser {
protected:
    string name;
    int id;
public:
    LibraryUser(string n, int i) {
        name = n;
        id = i;
    }
};

class Student : public LibraryUser {
    string grade;
public:
    Student(string n, int i, string g)
        : LibraryUser(n, i) {
        grade = g;
    }
    void display() {
        cout << name << " " << id << " " << grade << endl;
    }
};

class Teacher : public LibraryUser {
    string department;
public:
    Teacher(string n, int i, string d)
        : LibraryUser(n, i) {
        department = d;
    }
    void display() {
        cout << name << " " << id << " " << department << endl;
    }
};

int main() {
    Student s("Rahul", 1, "A");
    Teacher t("Dr.Sharma", 2, "Physics");
    s.display();
    t.display();
    return 0;
}
