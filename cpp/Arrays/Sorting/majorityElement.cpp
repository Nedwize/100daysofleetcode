// author: Nedwize
// 169. Majority Element
// Sorting

#include <iostream>
#include <vector>
#include <algorithm>`

using namespace std;

int majorityElement(vector<int>& nums) {

    // sort the array
    sort(nums.begin(), nums.end());

    int nextOccurence = nums.size() / 2;

    for (int i = 0; i < nums.size(); i++) {
        if(nums[i] == nums[i + nextOccurence]) {
            return nums[i];
        }
    }
    return -1;  
}

int main() {
    vector<int> a = {2,2,1,1,1,2,2};
    int element = majorityElement(a);
    cout << element << endl;
}