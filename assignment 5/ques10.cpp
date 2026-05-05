#include <iostream>
using namespace std;

class Person {
protected:
    string name;
    string address;
public:
    Person(string n, string a) {
        name = n;
        address = a;
    }
};

class Staff : virtual public Person {
protected:
    int employee_id;
    string department;
public:
    Staff(string n, string a, int id, string d)
        : Person(n, a) {
        employee_id = id;
        department = d;
    }
};

class Student : virtual public Person {
protected:
    int student_id;
    string grade;
public:
    Student(string n, string a, int id, string g)
        : Person(n, a) {
        student_id = id;
        grade = g;
    }
};

class TeachingAssistant : public Staff, public Student {
public:
    TeachingAssistant(string n, string a, int eid, string d, int sid, string g)
        : Person(n, a),
          Staff(n, a, eid, d),
          Student(n, a, sid, g) {}
    void display() {
        cout << name << " " << address << " "
             << employee_id << " " << department << " "
             << student_id << " " << grade << endl;
    }
};

int main() {
    TeachingAssistant ta("Aman", "Delhi", 101, "CS", 202, "A");
    ta.display();
    return 0;
}
