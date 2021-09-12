#include <iostream>
#include <vector>

using namespace std;

vector<int> runningSum(vector<int>& nums) {
    for(int i = 1; i < nums.size(); i++) {
        nums[i] = nums[i] + nums[i - 1];
    }
    return nums;
}

int printArray(vector<int> arr) {
    for(int i = 0; i < arr.size(); i++) {
        cout << arr[i] << ", ";
    }
    cout << endl;
    return 0;
}

int main() {
    // vector<int> a = {1,2,3,4};
    vector<int> a = {1,1,1,1,1};
    // vector<int> a = {3,1,2,10,1};
    vector<int> result = runningSum(a);
    printArray(result);
}

