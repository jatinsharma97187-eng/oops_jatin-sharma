#include <iostream>
#include <string>
using namespace std;

class Student {
private:
    string name;
    int roll;
    string degree;
    string hostel;
    float cgpa;

    void updateCGPA() {
        cout << "Enter new CGPA: ";
        cin >> cgpa;
    }

public:
    void addDetails() {
        cout << "Enter name: ";
        cin >> name;
        cout << "Enter roll number: ";
        cin >> roll;
        cout << "Enter degree: ";
        cin >> degree;
        cout << "Enter hostel: ";
        cin >> hostel;
        cout << "Enter CGPA: ";
        cin >> cgpa;
    }

    void updateDetails() {
        cout << "Enter new name: ";
        cin >> name;
        cout << "Enter new degree: ";
        cin >> degree;
    }

    void updateHostel() {
        cout << "Enter new hostel: ";
        cin >> hostel;
    }

    void changeCGPA() {
        updateCGPA();   // calling private function from public function
    }

    void displayDetails() {
        cout << "\nStudent Details:\n";
        cout << "Name: " << name << endl;
        cout << "Roll: " << roll << endl;
        cout << "Degree: " << degree << endl;
        cout << "Hostel: " << hostel << endl;
        cout << "CGPA: " << cgpa << endl;
    }
};

int main() {
    Student s;

    s.addDetails();
    s.displayDetails();

    s.updateDetails();
    s.updateHostel();
    s.changeCGPA();

    s.displayDetails();

    return 0;
}

