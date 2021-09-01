// author: Nedwize
// Diagonal Difference

#include <iostream>
#include <vector>

using namespace std;

int diagonalDifference(vector<vector<int>> arr) {
    int n = arr.size() - 1;
    int primaryDiagonal = 0;
    int secondaryDiagonal = 0;
    
    for (int i = 0; i < arr.size(); i++) {
        for(int j = 0; j < arr[0].size(); j++) {
            if (i == j) {
                primaryDiagonal += arr[i][j];
            }
            if (i + j == n) {
                secondaryDiagonal += arr[i][j];
            }
        }
    }
    return abs(primaryDiagonal - secondaryDiagonal);
}


int main() {
    // vector<vector<int>> arr = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}}; // Test 1
    vector<vector<int>> arr = {{11, 2, 4}, {4, 5, 6}, {10, 8, -12}}; 
    int result = diagonalDifference(arr);
    cout << result << endl;
}