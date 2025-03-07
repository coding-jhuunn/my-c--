#include <iostream>
using namespace std;

class Vehicle {
public:
    void move() { cout << "Vehicle is moving" << endl; }
};

class Car : public Vehicle {  // Car inherits from Vehicle
public:
    void honk() { cout << "Car honks: Beep Beep!" << endl; }
};

int main() {
    Car myCar;
    myCar.move();  // Inherited method
    myCar.honk();  // Own method
    return 0;
}
