#include <iostream>
using namespace std;

int main()
{
    // ===premitive data types===
    // cout << "Hello World" << endl;
    // int a = 123;
    // cout << a << endl;

    // float b = 1.23;
    // cout << b << endl;

    // double c = 1.23;
    // cout << c << endl;

    // bool trueOrfalse = true;
    // cout << trueOrfalse << "true" << endl;

    // char charecter = 'U';
    // cout << charecter << endl;
    // ===End Prevmitve Data types

    // ===sizeof===
    // int sizes = sizeof(a, b, c);
    // cout << sizes;
    // ===End sizeof===

    // ===Typecasting===
    // char ch = 11111111011;
    // cout << ch << endl;
    // ===End Typecasting===

    // print the negative value
    // unsigned int a = -112;
    // cout << a << endl;

    // float a1 = 2, b2 = 5;
    // cout << a1 / b2 << endl;
    // cout << 2.0 / 5 << endl;

    // int a, n;
    // cout << "Enter The Value :-\n ";
    // cin >> a >> n;
    // if (a == n)
    // {
    //     cout << "Equal" << endl;
    // }
    // else
    // {
    //     cout << "Not Equal" << endl;
    // };
    // int x, n1;
    // cout << "Enter The Value :-\n ";
    // cin >> x >> n1;
    // if (x > n1)
    // {
    //     cout << "Answer is a" << endl;
    // }
    // else
    // {
    //     cout << "Answer is n" << endl;
    // };

    int numberNature;
    cout << "Enter Any Number : ";
    cin >> numberNature;
    if (numberNature < 0)
    {
        cout << "value is negative : " << numberNature << endl;
    }
    else if (numberNature > 0)
    {
        cout << "value is positive : " << numberNature << endl;
    }
    else
    {
        cout << "value is Zero : " << numberNature << endl;
    };

    // char ch;
    // cout << "Enter Any Value";
    // cin >> ch;
    // if (ch>97)
    // {
    //     cout << "It is Lowercase";
    // }else if(ch>=65||ch<=91){
    //     cout << "It is Uppercase";
    // }else {

    // }
    char ch = 97+25;
    cout << ch;
    // int first;
    // first = cin.get();
    // // first = '1';
    // cout << "value of a is : " << first << endl;

    return 1;
}