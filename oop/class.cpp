#include <iostream>
using namespace std;

class Car {  // Class Definition
public:  // Access Specifier
    string brand;  // Data Members
    int speed;

    void showDetails() {  // Member Function
        cout << "Brand: " << brand << ", Speed: " << speed << " km/h" << endl;
    }
};

int main() {
    Car myCar;  // Object Creation
    myCar.brand = "Toyota";  // Assigning Values
    myCar.speed = 120;

    myCar.showDetails();  // Calling Member Function
    return 0;
}
