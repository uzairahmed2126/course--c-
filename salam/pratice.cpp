#include <iostream>
using namespace std;
class inharitence
{
    int a = 0, b = 0;

public:
    void sum()
    {
        cout << "Enter Values of a and b : ";
        cin >> a >> b;
        cout << a + b << endl;
    }
    void print(){
        cout << a << " " << b; 
    }
};

class inharitence2 : public inharitence
{
    char firstName[10], secondName[10];

public:
    void myName()
    {
        cout << "Enter First and Second Name : ";
        cin >> firstName >> secondName;
        cout << firstName << " " << secondName;
    }
    void print(){
        cout << firstName ;
    }
};
int main()
{
    inharitence2 name;
 
    name.sum();
    name.print();
    return 1;
}