// author: Nedwize
// Doubt by _Expelliarmus_ — 20th Sept 2021 at 9:56 AM
#include <iostream>
#include <vector>

using namespace std;

// Just to print the elements of the matrix
int printArray(vector<vector<int>>& nums) {
    for (int i = 0; i < nums.size(); i++) {
        for (int j = 0; j < nums[i].size(); j++) {
            cout << nums[i][j] << ", ";
        }
        cout << endl;
    }
    return 0;
}

vector<vector<int>> fillArray(vector<vector<int>>& nums) {

    // Traverse the sub array (empty rectangle)
    // O(n^2)

    for (int i = 1; i < nums.size(); i++) {
        for (int j = 1; j < nums[i].size(); j++) {
            // Add first column and row of the respective elements to get the sum
            nums[i][j] = nums[0][j] + nums[i][0]; 
        }
    }
    return nums;
}

int main() {
    vector<vector<int>> a = {{0, 2, 4, 6},
                             {1, 0, 0, 0},
                             {7, 0, 0, 0}};
    printArray(a); // Testing array before filling
    vector<vector<int>> result = fillArray(a);
    printArray(result); // Testing array after filling
}