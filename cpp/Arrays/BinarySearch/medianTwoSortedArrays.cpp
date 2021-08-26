// 4. Median of Two Sorted Arrays
// Revisit for Optimization

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
    double result;
    
     vector<int> arr;

     for (int i = 0; i < nums1.size(); i++) {
            arr.push_back(nums1[i]);
     }

     for (int i = 0; i < nums2.size(); i++) {
            arr.push_back(nums2[i]);
     }

     // sort the array
     sort(arr.begin(), arr.end());
     
     for(int i=0; i < arr.size(); i++) {
         cout << arr[i] << ", ";
     } 
     cout << endl;

    // Find median
    if(arr.size() % 2 != 0) { // If the length is odd
        result = arr[arr.size() / 2] * 1.0;
    } else { // If length is even
        result = (arr[arr.size()/2 - 1] + arr[arr.size()/2])/2.0;
    }
    return result;
     
}

int main() {
    vector<int> nums1 = {1,3};
    vector<int> nums2 = {2,4,6};

    double median = findMedianSortedArrays(nums1, nums2);
    cout << "Median is: " << median << endl;
}