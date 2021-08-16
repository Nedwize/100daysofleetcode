// 53. Maximum Subarray

class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int max_sum = nums[0], current_sum = nums[0];
        
        for(int i=1; i<nums.size(); i++) {
            current_sum = max(current_sum + nums[i], nums[i]);
            max_sum = max(current_sum, max_sum);
        }
        return max_sum;
    }
};