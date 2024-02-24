#include <iostream>
#include <vector>

int binarySearch(const std::vector<int> &arr, int target)
{
    int left = 0;
    int right = arr.size() - 1;

    while (left <= right)
    {
        int mid = left + (right - left) / 2;

        if (arr[mid] == target)
        {
            return mid; // Element found, return index
        }
        else if (arr[mid] < target)
        {
            left = mid + 1; // Continue searching in the right half
        }
        else
        {
            right = mid - 1; // Continue searching in the left half
        }
    }

    return -1; // Element not found
}

int main()
{
    std::vector<int> arr = {1, 3, 5, 7, 9, 11, 13, 15, 17, 19};
    int target = 7;
    int index = binarySearch(arr, target);
    if (index != -1)
    {
        std::cout << "Element found at index: " << index << std::endl;
    }
    else
    {
        std::cout << "Element not found" << std::endl;
    }
    return 0;
}
