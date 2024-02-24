#include <iostream>
using namespace std;

// Base class
class Animal
{
public:
    virtual void eat()
    {
        cout << "Animal is eating" << endl;
    }
};

// Intermediate classes
class Dog : virtual public Animal
{
public:
    void bark()
    {
        cout << "Dog is barking" << endl;
    }
};

class Cat : virtual public Animal
{
public:
    void meow()
    {
        cout << "Cat is meowing" << endl;
    }
};

// Derived class inheriting from Dog and Cat
class DogCat : public Dog, public Cat
{
public:
    // Since eat is a virtual function, it resolves the diamond problem
    void eat() override
    {
        cout << "DogCat is eating" << endl;
    }
};

int main()
{
    DogCat dc;
    dc.eat();  // Resolves the diamond problem and prints "DogCat is eating"
    dc.bark(); // Calls Dog's bark function and prints "Dog is barking"
    dc.meow(); // Calls Cat's meow function and prints "Cat is meowing"
    return 0;
}
