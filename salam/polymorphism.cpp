#include <iostream>
using namespace std;
// class constructor
// {
//     int firstNum, secondNum,total;

// public:
//     // default Constructor
//     constructor()
//     {
//         firstNum = 0;
//         secondNum = 0;
//     }
//     constructor(int a, int b)
//     {
//         firstNum = a;
//         secondNum = b;
//         total = a+b;
//     }
//     void input()
//     {
//         cout << "Enter First Number :" << endl;
//         cin >> firstNum;
//         cout << "Enter Second Number :" << endl;
//         cin >> secondNum;
//     }
//     void print()
//     {
//         cout << firstNum << endl;
//         cout << secondNum << endl;
//         cout << "Your Total is :"<<firstNum+secondNum << endl;
//     }
// };
// void towParam(int firstVal, int secondVal)
// {
//     cout << firstVal + secondVal;
// }

// function prototyping
void towParam(int, int);
void towParam(int, int, int);
int main()
{
    towParam(20, 80);
    towParam(20, 80, 50);//function overloading
    // constructor arithMatic(4,4);
    // arithMatic.input();
    // arithMatic.print();
    return 1;
};

void towParam(int firstVal, int secondVal)
{
    cout << firstVal + secondVal;
};

void towParam(int firstVal, int secondVal, int third)
{
    cout << firstVal + secondVal + third;
    cout << endl << "uzair ahmed";
};

// if we want to declare function at bottom then we have to overload the function