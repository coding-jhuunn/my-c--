#include <iostream>
using namespace std;

class Car {
    public:
        Car() { cout << "Car Created" << endl; }
        ~Car() { cout << "Car Destroyed" << endl; } // Destructor
    };
    
    int main() {
        Car myCar;  // Constructor called automatically
        return 0;   // Destructor called automatically
    }
