// author: Nedwize
// 1913. Maximum Product Difference Between Two Pairs

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int maxProductDifference(vector<int>& nums) {

    // sorting the array
    sort(nums.begin(), nums.end());   

    return  (nums[nums.size() - 1] * nums[nums.size() - 2]) - (nums[0] * nums[1]);
}

int main() {
    // vector<int> arr = {4,2,5,9,7,4,8};
    vector<int> arr = {5,6,2,7,4};

    int result = maxProductDifference(arr);
    cout << result << endl;
}