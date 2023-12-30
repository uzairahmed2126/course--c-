#include <iostream>
using namespace std;
class stack
{
    int tos;
    int i;
    int data;
    int arr[10];

public:
    stack()
    {
        tos = -1;
        data = 0;
        for (i = 0; i < 10; i++)
        {
            arr[i] = 0;
        }
    }
    void push()
    {
        if (tos == 9)
        {
            cout << "stack overflow!!\n";
            return;
        }
        cout << "Enter value u want to push : " << endl;
        cin >> data;
        tos++;
        arr[tos] = data;
    }
    void pop()
    {
        if (tos == -1)
        {
            cout << "stack under flow!!\n";
            return;
        }
        arr[tos] = 0;
        tos--;
    }
    void print()
    {
        if (tos == -1)
        {
            cout << "stack is empty\n";
            return;
        }
        cout << "Top Of Stack :  " << tos + 1 << endl;
        for (i = 0; i <= tos; i++)
        {
            cout << arr[i] << "\t";
        }
    }
};
int main()
{
    int i;
    stack s1;
    for (i = 0; i < 10; i++)
    {
        s1.push();
    }
    s1.pop();
    s1.print();
    return 1;
}