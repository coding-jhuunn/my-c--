#include <iostream>
using namespace std;

class Car {
public:
    string brand;
    
    // Constructor
    Car(string b) {
        brand = b;
        cout << "Car object created!" << endl;
    }
};

int main() {
    Car myCar("Tesla");  // Calls Constructor
    cout << "Brand: " << myCar.brand << endl;
    return 0;
}
