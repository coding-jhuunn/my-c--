#include <iostream>
using namespace std;

class Animal {
public:
    virtual void makeSound() { cout << "Animal makes a sound" << endl; }
};

class Dog : public Animal {
public:
    void makeSound() override { cout << "Dog barks: Woof Woof!" << endl; }
};

int main() {
    Animal* myPet = new Dog();  // Base class pointer
    myPet->makeSound();  // Calls Dog's makeSound()
    delete myPet;
    return 0;
}
