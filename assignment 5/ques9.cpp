#include <iostream>
using namespace std;

class Vehicle {
protected:
    string make;
    string model;
    int year;
public:
    Vehicle(string mk, string md, int y) {
        make = mk;
        model = md;
        year = y;
    }
};

class Truck : public Vehicle {
protected:
    int load_capacity;
public:
    Truck(string mk, string md, int y, int lc)
        : Vehicle(mk, md, y) {
        load_capacity = lc;
    }
};

class RefrigeratedTruck : public Truck {
    int temperature_control;
public:
    RefrigeratedTruck(string mk, string md, int y, int lc, int tc)
        : Truck(mk, md, y, lc) {
        temperature_control = tc;
    }
    void display() {
        cout << make << " " << model << " " << year << " "
             << load_capacity << " " << temperature_control << endl;
    }
};

int main() {
    RefrigeratedTruck obj("Tata", "X1", 2024, 1000, -5);
    obj.display();
    return 0;
}
