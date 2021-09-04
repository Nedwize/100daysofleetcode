// author: Nedwize
// 283. Move Zeroes

#include <iostream>
#include <vector>

using namespace std;

void removeElement(vector<int>& nums, int val) {

    int j = 0;
    for (int i = 0; i < nums.size(); i++) {
        
        if(nums[i] != val) {
            nums[j] = nums[i];
            j++;
        }
    }
    return j;
}

int main() {

}