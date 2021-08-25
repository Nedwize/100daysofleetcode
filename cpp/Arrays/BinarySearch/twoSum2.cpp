// 167. Two Sum II - Input array is sorted
// Revisit // Slow

#include <iostream>
#include <vector>

using namespace std;

int binarySearch(vector<int> arr, int target, int start, int end)
{
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

vector<int> twoSum(vector<int>& numbers, int target) {
    int index;
    vector<int> ans = {-1, -1};

    for(int i = 0; i < numbers.size(); i++) {
        int needed = target - numbers[i];

        if(needed <= numbers[i]) {
            index = binarySearch(numbers, needed, 0, i-1);
        } else {
            index = binarySearch(numbers, needed, i + 1, numbers.size() - 1);
        }
        if(index != -1) {
            ans[0] = min(i+1, index+1);
            ans[1] = max(index+1, i+1);
            return ans;
        }
    }
    return ans; 
}

int main() {
    // vector<int> nums = {2,7,11,15}; // Example 1
    // vector<int> nums = {2,3,4}; // Example 2
    vector<int> nums = {0,0,3,4}; // Example 3
    vector<int> ans = twoSum(nums, 0);
    
    for(int i=0; i < ans.size(); i++) {
        cout << ans[i] << ",";
    }
    cout << endl;
}

