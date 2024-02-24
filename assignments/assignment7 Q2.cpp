#include <iostream>
using namespace std;

// Abstract class
class Shape
{
public:
    // Pure virtual function
    virtual void draw() = 0;

    // Normal member function
    void display()
    {
        cout << "Displaying shape" << endl;
    }
};

// Concrete class
class Circle : public Shape
{
public:
    // Implementing the pure virtual function
    void draw() override
    {
        cout << "Drawing a circle" << endl;
    }
};

int main()
{
    // Shape* shape = new Shape(); // This line will cause a compilation error
    Shape *shape = new Circle(); // OK, because Circle is not abstract
    shape->draw();
    shape->display();
    delete shape;
    return 0;
}
