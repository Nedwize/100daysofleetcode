// author: Nedwize
// 1470. Shuffle the Array

#include <iostream>
#include <vector>

using namespace std;

vector<int> shuffle(vector<int>& nums, int n) {
    vector<int> arr;
    for (int i = 0; i < n; i++) {
        arr.push_back(nums[i]);
        arr.push_back(nums[n + i]);
    }
    return arr;
}

int main() {

}