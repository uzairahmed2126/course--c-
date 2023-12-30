#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << " Enter size of array : " << endl;
    cin >> n;
    if (n <= 0)
    {
        cout << "Enter Valid Value " << endl;
        return 0;
    }
    int array[n];
    cout << "Enter " << n << " integers for the array : " << endl;
    for (int i = 0; i < n; i++)
    {
        cout << "Element " << i + 1 << ": ";
        cin >> array[i];
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n - i - 1; j++)
        {
            int currentEl = array[j];
            int nextEl = array[j + 1];
            if (currentEl > nextEl)
            {
                int temp = currentEl;
                array[j] = nextEl;
                array[j + 1] = currentEl;
                return 0;
            }
        }
    }

    cout << "Sorted array: [";
    for (int i = 0; i < n - 1; i++)
    {
        cout << array[i] << ", ";
    }
    cout << array[n - 1] << "]" << endl;

    return 0; // Exit successfully
}
