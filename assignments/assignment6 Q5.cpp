#include <iostream>
using namespace std;

// Base class
class Base {
public:
    void display() {
        cout << "Base class display function" << endl;
    }
};

// Intermediate classes
class Intermediate1 : public Base {
public:
    void display() {
        cout << "Intermediate1 class display function" << endl;
    }
};

class Intermediate2 : public Base {
public:
    void display() {
        cout << "Intermediate2 class display function" << endl;
    }
};

// Derived class
class Derived : public Intermediate1, public Intermediate2 {
public:
    void display() {
        Intermediate1::display(); // Uncomment to resolve ambiguity
        // Intermediate2::display(); // Uncomment to resolve ambiguity
    }
};

int main() {
    Derived d;
    d.display(); // This will call the display function of Intermediate1 or Intermediate2
    return 0;
}
