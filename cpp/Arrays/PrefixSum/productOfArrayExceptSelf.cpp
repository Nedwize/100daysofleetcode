 

#include <iostream>
#include <vector>

using namespace std;

vector<int> productExceptSelf(vector<int>& nums) {

    int flag = 0;
    int mult = 1;
    vector<int> result;

    for (int i = 0; i < nums.size(); i++) {
        if (nums[i] == 0) {
            flag = i;
            continue;
        } else {
            mult *= nums[i];
        }
    }

    for (int i = 0; i < nums.size(); i++) {
        if(flag == 0) {
            result.push_back(mult / nums[i]);
        } else if(nums[i] == 0) {
            result.push_back(mult);
        } else {
            result.push_back(0);
        }
    }
    
    return result;
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
    vector<int> a = {-1,1,0,-3,3};
    vector<int> ans = productExceptSelf(a);

    printArray(ans);
}