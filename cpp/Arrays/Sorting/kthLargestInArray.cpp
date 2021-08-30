// author: Nedwize
// 215. Kth Largest Element in an Array
// Revisit

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int printArray(vector<int> arr) {
    for(int i = 0; i < arr.size(); i++) {
        cout << arr[i] << ", ";
    }
    cout << endl;
    return 0;
}

int findKthLargest(vector<int>& nums, int k) {
    sort(nums.begin(), nums.end());
    return nums[nums.size() - k];
}

int main() {
    vector<int> a = {3,2,3,1,2,4,5,5,6};
    int r = findKthLargest(a, 4);
    cout << "result: " << r << endl;
}