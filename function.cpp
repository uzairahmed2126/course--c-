#include <iostream>
using namespace std;

int power(int a)
{
    int ans;
    for (int i = 1; i < 10; i++)
    {
        ans = a * i;
        cout << ans << endl;
    }
    return ans+a;
}
int main()
{
    int a;
    cout << "Enter a and b value : ";
    cin >> a;
    cout << power(a);
    return 0;
}
