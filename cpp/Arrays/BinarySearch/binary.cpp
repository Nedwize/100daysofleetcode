// Binary Search
#include <iostream>
#include <vector>

using namespace std;

// Searching Algorithms

// Linear Search
// Works for Sorted and Unsorted Arrays

// Target = 10
// {1, 3, 5, 10, 14, 16, 20, 35, 56, 78, 99}; = n
//        ^       ^
// start = 3                             end = 10
// 
// O(n) - Linear Time Complexity

// 0 ....................64.................. 100

int linearSearch(vector<int>& nums, int target) {

    // Traverse the array from beginning to end
    for (int i = 0; i < nums.size(); i++) {
        if(nums[i] == target) return i; // If target is found then return its position
    } // 1ms
    return -1;
}

int binarySearch(vector<int>& nums, int target) {

    int start = 0;
    int end = nums.size() - 1;
    int mid;

    // Base case start <= end
    while(start <= end) {
        mid = start + (end - start) / 2; // end + start / 2
        cout << "Start: " << start << " Mid: " << mid << " End: " << end << endl;
        if(nums[mid] == target) return mid;
        if(nums[mid] < target) start = mid + 1;
        else end = mid - 1;
    }
    return -1;
}

int main() {
    vector<int> a = {1, 3, 5, 10, 14, 16, 20, 35, 56, 78, 99};
    int result = binarySearch(a, 17);
    cout << "Result: " << result << endl;
}

// First bad version 
// Ceiling of a number - 744
// Floor of a number 
// First and Last - LeetCode 34

// 3 Blue 1 Brown
// Jason Mayes