// author: Nedwize
// 283. Move Zeroes

#include <iostream>
#include <vector>

using namespace std;

void moveZeroes(vector<int>& nums) {

    int j = 0;
    for (int i = 0; i < nums.size(); i++) {
        
        if(nums[i] != 0) {
            nums[j] = nums[i];
            j++;
        }
    }

    for (j; j < nums.size(); j++) {
        nums[j] = 0;
    }  
}

int main() {

}