#include <iostream>
using namespace std;

class Speedometer {
protected:
    int speed;
public:
    Speedometer(int s) { speed = s; }
};

class FuelGauge {
protected:
    int fuel;
public:
    FuelGauge(int f) { fuel = f; }
};

class Thermometer {
protected:
    int temperature;
public:
    Thermometer(int t) { temperature = t; }
};

class CarDashboard : public Speedometer, public FuelGauge, public Thermometer {
public:
    CarDashboard(int s, int f, int t)
        : Speedometer(s), FuelGauge(f), Thermometer(t) {}
    void display() {
        cout << "Speed: " << speed << endl;
        cout << "Fuel: " << fuel << endl;
        cout << "Temperature: " << temperature << endl;
    }
};

int main() {
    CarDashboard car(80, 50, 35);
    car.display();
    return 0;
}
