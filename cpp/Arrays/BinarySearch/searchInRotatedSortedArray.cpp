// 33. Search in Rotated Sorted Array
// Revisit

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


int findPeakElement(vector<int> arr) {
      int start = 0;
      int end = arr.size() - 1;
      int mid = start + (end - start) / 2;

      while(start < end) {
          mid = start + (end - start) / 2;

          if (arr[mid] < arr[mid+1]) {
              start = mid + 1;
          } else if (arr[mid] > arr[mid+1]) {
              end = mid;
          }       
      }
      return start;
};

int search(vector<int>& nums, int target) {
    int peak = findPeakElement(nums);
    int indexOfTarget = 0;

    if(nums[0] > target) {
        indexOfTarget = binarySearch(nums, target, peak, nums.size() - 1)
    } else {
        indexOfTarget = binarySearch(nums, target, 0, peak)
    }

    return indexOfTarget;
}

int main()
{
    vector<int> arr = {4,5,6,7,0,1,2};
    int ind = search(arr, 0);
    cout << "Found at : " << ind << endl;
}
