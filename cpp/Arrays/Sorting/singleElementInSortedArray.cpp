// author: Nedwize
// 540. Single Element in a Sorted Array
// Revisit
#include <iostream>
#include <vector>

using namespace std;

int singleNonDuplicate(vector<int>& nums) {

    int start = 0;
    int end = nums.size() - 1;
    int mid;

    if(nums.size() == 1) return nums[0];

    while(start <= end) {
        mid = start + (end - start) / 2;

        if (mid - 1 >= 0 && nums[mid] != nums[mid + 1] && nums[mid] != nums[mid - 1]) {
            return nums[mid];
        } else if (mid - 1 >= 0 && nums[mid] == nums[mid + 1] && mid % 2 != 0 || nums[mid] == nums[mid - 1] && mid % 2 == 0) {
            end = mid - 1;
        } else if (mid - 1 >= 0 && nums[mid] == nums[mid + 1] && mid % 2 == 0 || nums[mid] == nums[mid - 1] && mid % 2 != 0) {
            start = mid + 1;
        }
    }
    return -1;
}

int main() {
    // vector<int> a = {1,1,2,3,3,4,4,8,8}; // Ex 1
    // vector<int> a = {3,3,7,7,10,11,11}; // Ex 2
    vector<int> a = {1,1,2,2,3,3,4}; // Ex 3
    int res = singleNonDuplicate(a);
    cout << res << endl;
}