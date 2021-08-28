class Solution {
public:
    int numberOfElementsGreaterOrEqualToX(vector<int>& arr, int x) {
        int ct = 0;
        for (int i = 0; i < arr.size(); i++) {
            if (arr[i] >= x) ct++;
        }
        return ct;
    }
    
    int specialArray(vector<int>& arr) {
        
        // sort the array
        sort(arr.begin(), arr.end());
        int start = 0;
        int end = arr.size();
        int mid;
        
        while(start <= end) {
            mid = start + (end - start) / 2;
            if(numberOfElementsGreaterOrEqualToX(arr, mid) < mid) {
                end = mid - 1;
            } else if (numberOfElementsGreaterOrEqualToX(arr, mid) > mid) {
                start = mid + 1;
            } else {
                return mid;
            }
        }
        return -1;
    }
};