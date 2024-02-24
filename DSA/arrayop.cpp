#include <iostream>
using namespace std;

int main()
{
    // bubble sorting
    int array[10] = {1, 16, 4, 45, 34, 34, 343, 2, 3, 2};
    for (int i = 0; i < 10; i++)
    {
        for (int j = 0; j < 9 - i; j++)
        {
            int currentEl = array[j];
            int nextEl = array[j + 1];
            if (currentEl > nextEl)
            {
                int temp = currentEl;
                array[j] = nextEl;
                array[j + 1] = temp;
            }
        }
    }
    for (int k = 0; k < 10; k++)
    {
        cout << array[k] << " ";
    }

    return 1;
}
