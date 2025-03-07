#include <iostream>
using namespace std;

class Shape {
public:
    virtual void draw() = 0;  // Pure Virtual Function (Abstract Method)
};

class Circle : public Shape {
public:
    void draw() override { cout << "Drawing a Circle" << endl; }
};

int main() {
    Shape* shape = new Circle();
    shape->draw();
    delete shape;
    return 0;
}
