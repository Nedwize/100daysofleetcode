// author: Nedwize
// 540. Single Element in a Sorted Array

class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {
        
        int n = nums.size();
      
        if(n == 1) return nums[0];
        if(nums[n - 1] != nums[n - 2]) return nums[n - 1];
        if(nums[0] != nums[1]) return nums[0];
        
        // iterative binary search
        int start = 0;
        int end = n - 1;
        int mid;
      
        while(start < end) {
            int mid = start + (end - start) / 2;
            
            if(mid % 2 == 1) {
                if(nums[mid] != nums[mid - 1]) end = mid;
                else start = mid + 1;                
            }
          
            else {
                if(nums[mid] != nums[mid + 1]) end = mid;
                else start = mid + 1;
            }            
        }
        
        return nums[start];
      }
};