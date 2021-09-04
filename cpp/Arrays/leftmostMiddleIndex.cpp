// author: Nedwize
// 5846. Find the Middle Index in Array
// Contest - Biweekly 60 
#include <iostream>
#include <vector>

using namespace std;

int findMiddleIndex(vector<int>& nums) {
    int rightPointer = nums.size() - 1;
    int leftSum = 0, rightSum = 0;

    if(nums.size() == 1) return 0;

    for (int i = 0; i < nums.size(); i++) {

        if(i > 0) {
            leftSum += nums[i - 1];
        } 
        int j = i + 1;

        rightSum = 0;
        while(j < nums.size()) {
            rightSum += nums[j];
            j++;
        }
        cout << "At index: " << i << " leftSum: " << leftSum << " rightSum: " << rightSum << endl;
        if(leftSum == rightSum) {
            return i;
        }
    }
    return -1;
}

int main() {
    vector<int> a = {4,0};
    int result = findMiddleIndex(a);
    cout << result << endl;
}