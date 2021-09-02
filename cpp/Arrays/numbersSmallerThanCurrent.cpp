// author: Nedwize
// 1365. How Many Numbers Are Smaller Than the Current Number

#include <iostream>
#include <vector>

using namespace std;

vector<int> smallerNumbersThanCurrent(vector<int>& nums) {
    
    // Counting the occurence of each element in the nums array
    int frequencyArray[101] = {}; 
    for (int i = 0; i < nums.size(); i++) {
        frequencyArray[nums[i]]++;
    }

    for(int i = 1; i < frequencyArray.size(); i++) {
        frequencyArray[i] += frequencyArray[i-1];
    }
    
    for(int i=0; i<nums.length; i++){
        if(nums[i] - 1 < 0)
            nums[i] = 0;
        else
            nums[i] = freq[nums[i]-1];
    }
}

int main() {

}