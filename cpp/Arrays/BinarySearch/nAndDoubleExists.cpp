// 1346. Check If N and Its Double Exist

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int binarySearch(vector<int> arr, int i, int target)
{
    int start = 0;
    int end = arr.size() - 1;

    while (start <= end)
    {
        int mid = start + (end - start) / 2;

        if (arr[mid] == target)
        {
            if(mid != i) {
                return mid;
            }
            return -1;
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

bool checkIfExist(vector<int>& arr) {

    // sort the array
    sort(arr.begin(), arr.end());

    for (int i = 0; i < arr.size(); i++)
    {
        if(binarySearch(arr, i, 2*arr[i]) != -1) {
            return true;
        }
    }
    return false;
}


int main()
{
    // vector<int> arr = {10,2,5,3}; // Ex 1
    // vector<int> arr = {7,1,14,11}; // Ex 2
    // vector<int> arr = {3,1,7,11}; // Ex 3
    vector<int> arr = {-2,0,10,-19,4,6,-8};
    bool ind = checkIfExist(arr);
    cout << "Found at : " << ind << endl;
}