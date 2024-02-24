#include <iostream>
using namespace std;
class node
{
    int a;

public:
    node(int n)
    {
        int a;
        a = n;
        this->a = n;
        cout << a << endl;
        cout << this->a << endl;
    }
};
int main()
{
    node obj(10);
    return 0;
}
