// 1287. Element Appearing More Than 25% In Sorted Array

class Solution {
public:
    int findSpecialInteger(vector<int>& arr) {
        int minOccur = arr.size() * 0.25;

        for (int i = 0; i < arr.size(); i++) {
            if(arr[i] == arr[i + minOccur]) {
                return arr[i];
            }
        }
        return 0;
    }
};