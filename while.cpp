#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter the value";
    cin >> n;
    int i = 1, sum = 0;

    while (i <= n)
    {
        if (i % 2 == 0)
        {
            sum += i;
        };
        i++;
    };
        cout << sum << endl;
        

}