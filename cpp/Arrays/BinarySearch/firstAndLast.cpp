// 34. Find First and Last Position of Element in Sorted Array

#include <iostream>
#include <vector>

using namespace std;

int binarySearch(vector<int> arr, int target, bool firstIndexSearch)
{
    int start = 0;
    int end = arr.size() - 1;
    int mid = 0;
    int ans = -1;

    while (start <= end)
    {
        mid = start + (end - start) / 2;

        if (arr[mid] == target)
        {
            ans = mid;
            if(firstIndexSearch) {
                end = mid - 1;
            } else {
                start = mid + 1;
            }
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
    return ans;
}

 vector<int> searchRange(vector<int>& nums, int target) {
        vector<int> ans = {-1, -1};
        ans[0] = binarySearch(nums, target, true);
        if(ans[0] != -1) ans[1] = binarySearch(nums, target, false);
        return ans;
    }

int main()
{
    vector<int> arr = { 5, 7, 7, 8, 8, 10};
    vector<int> result = searchRange(arr, 7);

    for (int i = 0; i < result.size(); i++) {
        cout << result[i] << ",";
    }
    cout << endl;
}
