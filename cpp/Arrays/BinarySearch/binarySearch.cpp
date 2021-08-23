#include <iostream>
#include <vector>

using namespace std;

int binarySearch(vector<int> arr, int target)
{
    int start = 0;
    int end = arr.size() - 1;

    while (start <= end)
    {
        int mid = start + (end - start) / 2;

        if (arr[mid] == target)
        {
            return mid;
        }
        else if (arr[mid] > target)
        {
            end = mid - 1;
        }
        else if (arr[mid] < target)
        {
            start = mid + 1;
        }
    }
    return -1;
}

int orderAgnosticBinarySearch(vector<int> arr, int target)
{
    int start = 0;
    int end = arr.size() - 1;

    bool isAsc = arr[start] < arr[end];

    while (start <= end)
    {
        int mid = start + (end - start) / 2;

        if (arr[mid] == target)
        {
            return mid;
        }

        if (isAsc)
        {
            if (arr[mid] > target)
            {
                end = mid - 1;
            }
            else
            {
                start = mid + 1;
            }
        }
        else
        {
            if (arr[mid] < target)
            {
                end = mid - 1;
            }
            else
            {
                start = mid + 1;
            }
        }
    }
    return -1;
}

int main()
{
    vector<int> arr = {-2, -3, 4, -1, -2, 1, 5, -3};
    int ind = binarySearch(arr, 4);
    cout << "Found at : " << ind << endl;
}