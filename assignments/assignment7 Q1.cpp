#include <iostream>
using namespace std;

// Base class
class Shape
{
public:
    // Virtual function
    virtual void draw()
    {
        cout << "Drawing a shape" << endl;
    }
};

// Derived class
class Circle : public Shape
{
public:
    // Override the virtual function
    void draw() override
    {
        cout << "Drawing a circle" << endl;
    }
};

int main()
{
    Shape *shape = new Circle(); // Create a Circle object and assign it to a Shape pointer
    shape->draw();               // Calls the draw function of the Circle class
    delete shape;                // Remember to delete dynamically allocated memory
    return 0;
}
