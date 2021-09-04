// author: Nedwize
// 1877. Minimize Maximum Pair Sum in Array

class Solution {
public:
    int minPairSum(vector<int>& nums) {
        
      // sorting the array
      sort(nums.begin(), nums.end());
      
      int result = 0;
      int start = 0;
      int end = nums.size() - 1;
      
      while(start < end) {
        result = max(result, nums[start] + nums[end]);
        start++;
        end--;
      }
      return result;
    }
};