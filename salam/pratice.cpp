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
};

class inharitence2
{
    char a[10], b[10];

public:
    void myName()
    {
        cout << "Enter First and Second Name : ";
        cin >> a >> b;
        cout << a << " " << b;
    }
};
int main()
{
    inharitence arithmetic;
    arithmetic.sum();
    inharitence2 name;
    name.myName();
    return 1;
}