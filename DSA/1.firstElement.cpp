#include <iostream>
using namespace std;

int main()
{
    int arr[] = {2, 15, 1, 3, 0};
    for (int i = 0; i < 4; i++)
    {
        // if (arr[i] > arr[i + 1])
        // {
        //     int temp = arr[i];
        //     arr[i] = arr[i + 1];
        //     arr[i + 1] = temp;
        // }
        if (arr[i] == 1)
        {
            cout << "yes Exist";
        }
    }
    cout << "Largest element: " << arr[4] << endl;
    return 0;
}