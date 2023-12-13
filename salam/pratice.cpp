#include <iostream>
using namespace std;
class sum
{   
    int firstnum,secondnum;

public:
    sum(){
        firstnum=0;
        secondnum=0;
    }
    void input()
    {
        cout << "first number : \n";
        cin >> firstnum;
        cout << "second num : \n";
        cin >> secondnum;
    }
    void print()
    {
        cout << firstnum + secondnum<< endl;
    }
};

int main()
{
    sum father;
   // father.input();
    father.print();

    return 1;
}