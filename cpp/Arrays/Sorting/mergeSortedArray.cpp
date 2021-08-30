// author: Nedwize
// 88. Merge Sorted Array

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

void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {

    for (int i = m; i < m + n; i++) {
        nums1[i] = nums2[i - m];
    }
    sort(nums1.begin(), nums1.end());
    printArray(nums1);
}

int main() {
    vector<int> nums1 = {1,2,3,0,0,0};
    vector<int> nums2 = {2,5,6};

    merge(nums1, 3, nums2, 3);
}