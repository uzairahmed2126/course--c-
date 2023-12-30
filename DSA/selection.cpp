#include <iostream>
using namespace std;
int main()
{ // insertion it take complexity more then rest methods
    int array[10] = {10, 4, 45, 34, 35, 34, 34, 4, 9, 10};
    for (int i = 1; i <= 10; i++)
    {
        for (int j = i - 1; j >= 0; j--)
        {
            if (array[j + 1] < array[j])
            {
                int temp = array[j + 1];
                array[j + 1] = array[j];
                array[j] = temp;
            }
        }
    }

    // for (int i = 0; i < 10; i++)
    // {
    //     int currentpos = i;
    //     for (int j = i + 1; j <= 10; j++)
    //     {
    //         if (array[currentpos] > array[j])
    //         {
    //             int temp = array[currentpos];
    //             array[currentpos] = array[j];
    //             array[j] = temp;
    //         }
    //     }
    // }

    for (int k = 0; k < 10; k++)
    {
        cout << array[k] << "\t";
    }
    return 0;
}
