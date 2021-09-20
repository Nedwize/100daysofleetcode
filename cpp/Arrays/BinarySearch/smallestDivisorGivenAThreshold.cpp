// author: Nedwize
// 1283. Find the Smallest Divisor Given a Threshold

#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

int divisionSum(vector<int>& nums, int divisor) {
    int sum = 0;
    for (int i = 0; i < nums.size(); i++) {
        double n = nums[i] /(double)divisor;
        sum += ceil(n);
    }
    cout << "The sum for divisor: " << divisor << " is " << sum << endl; 
    return sum;
}

int smallestDivisor(vector<int>& nums, int threshold) {
    // Let us calculate the largest element in the array so we know the upper limit
    int largest = INT_MIN;
    for (int i = 0; i < nums.size(); i++) {
        largest = max(largest, nums[i]);
    }

    // Set the upper limit to largest number in the array
    int upperLimit = largest;
    int lowerLimit = 1;
    int mid;

    while(lowerLimit <= upperLimit) {
        mid = lowerLimit + (upperLimit - lowerLimit) / 2;

        int sum = divisionSum(nums, mid);
        // if(sum == threshold) return mid;

        if(sum > threshold) lowerLimit = mid + 1;
        else upperLimit = mid - 1;
    }
    return lowerLimit;
}

int main() {
    // vector<int> a = {1,2,5,9}; // Thres = 6
    // vector<int> a = {44,22,33,11,1}; // Thres = 5
    // vector<int> a = {21212,10101,12121}; // Thres = 1000000
    vector<int> a = {200,100,14}; // Thres = 10
    int re = smallestDivisor(a, 10);
    cout << re << endl;
}