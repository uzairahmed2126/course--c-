#include <iostream>
using namespace std;
// function overriding
// Base class
class Animal
{
public:
    // Virtual function eat
    virtual void eat()
    {
        cout << "Animal is eating..." << endl;
    }
};

// Derived class
class Dog : public Animal
{
public:
    // Overriding the eat function
    void eat() override
    {
        cout << "Dog is eating..." << endl;
    }
};

int main()
{
    Animal *animal = new Animal();
    Dog *dog = new Dog();

    // Call eat function of base class
    animal->eat();

    // Call eat function of derived class
    dog->eat();

    delete animal;
    delete dog;

    return 0;
}
