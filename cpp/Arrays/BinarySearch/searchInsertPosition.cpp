// 35. Search Insert Position

#include <iostream>
#include <vector>

using namespace std;

int binarySearch(vector<int> arr, int target)
{
    int start = 0;
    int end = arr.size() - 1;
    int mid = start + (end - start) / 2;

    while (start <= end)
    {
        mid = start + (end - start) / 2;

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
    return start;
}

int main()
{
    vector<int> arr = {1,3,5,6};
    int ind = binarySearch(arr, 4);
    cout << "Found at : " << ind << endl;
}