#include <iostream>
using namespace std;
int main()
{
    int arr[10];
    int index = -1;
    int ch, data, i;
    while (true)
    {
        cout << "\n Enter your choice : \n";
        cout << "1 for insert at last\n";
        cout << "2 for delete at last\n";
        // cout << "3 for insert at first\n";
        // cout << "4 for delete at first\n";
        cout << "3 for print\n";
        cout << "4 for exit\n";
        cin >> ch;
        switch (ch)
        {
        case 1:
            if (index == 9)
            {
                cout << "array is full\n";
            }
            else
            {
                ++index;
                cout << "enter the value u want to insert\n";
                cin >> data;
                arr[index] = data;
            }
            break;
        case 2:
            if (index == -1)
            {
                cout << "Array is Empty ";
            }
            else
            {
                --index;
            }
            break;
        // case 3:
        //     if (index == 9)
        //     {
        //         cout << "array is full";
        //     }
        //     else
        //     {
        //         cout << "enter  number you want to insert\n";
        //         cin >> data;
        //         ++index;
        //         for (int i = index; i > 0; i--)
        //         {
        //             arr[i] = arr[i - 1];
        //         }
        //         arr[0] = data;
        //     }
        //     break;
        // case 4:
        //     if (index == -1)
        //     {
        //         cout << "array is empty";
        //     }
        //     else
        //     {
        //         --index;
        //         for (i = 0; i <= index; i++)
        //         {
        //             arr[i] = arr[i + 1];
        //         }
        //     }
        //     break;
        case 3:
            if (index == -1)
            {
                cout << "array is empty\n";
            }
            else
            {
                cout << "array is :";
                for (i = 0; i <= index; i++)
                {
                    cout << arr[i] << "  ";
                }
            }
            break;
        case 4:
            return 0;
        }
    }
    return 0;
}