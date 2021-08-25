// 33. Search in Rotated Sorted Array

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


int findPivot(vector<int> arr) {

    int start = 0;
    int end = arr.size() - 1;
    int mid;

    while(start <= end) {
        mid = start + (end - start) / 2;
        
        if(mid < arr.size()-1 && arr[mid] > arr[mid + 1]) {
            return mid;
        } else if(mid > 0 && arr[mid - 1] > arr[mid]) {
            return mid - 1;
        } else if(arr[mid] > arr[start]) {
            start = mid + 1;
        } else {
            end = end - 1;
        }
    }
    return -1;
}

int search(vector<int>& nums, int target) {
    int peak = findPivot(nums);
    int indexOfTarget = 0;
    
    if(nums[peak] == target) {
        return peak;
    }

    if(nums[0] > target) {
        indexOfTarget = binarySearch(nums, target, peak+1, nums.size() - 1);
    } else {
        indexOfTarget = binarySearch(nums, target, 0, peak);
    }

    return indexOfTarget;
}

int main()
{
    vector<int> arr = {4,5,6,7,0,1,2};
    int ind = search(arr, 9);
    cout << "Found at : " << ind << endl;
}

// Optimized

int search(vector<int>& nums, int target) {
    
    int start = 0, end = arr.size() - 1;
    int mid;

    while(start <= end) {
        mid = start + (end - start) / 2;

        if(nums[mid] == target) {
            return mid;
        }

        if(nums[mid] >= nums[start]) { // Then mid is present at the left side
            if(target < nums[mid] && target >= nums[start]) {
                end = end - 1;
            } else {
                start = start + 1;
            }
        } else { // mid is present at right side
            if(target > nums[mid] && target <= nums[end]) {
                start = start + 1;
            } else {
                end = end - 1;
            }
        }
    }
    return -1;
}