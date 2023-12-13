#include <iostream>
using namespace std;
class sum
{   
    int firstnum,secondnum;

public:
    sum(){
        firstnum=0; // default constructor
        secondnum=0;
    }
    sum(int a,int b){
        firstnum = a; // parametrized constructor 
        secondnum = b;
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
    sum father(1,2);
    //father.input();
    father.print();

    return 1;
}