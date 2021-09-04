// author: Nedwize
// 807. Max Increase to Keep City Skyline

#include <iostream>
#include <vector>

using namespace std;

int maxIncreaseKeepingSkyline(vector<vector<int>>& grid) {
    int count = 0;
    for (int i = 0; i < grid.size(); i++) {
        
        int largestInRow = 0;
        for (int j = 0; j < grid[i].size(); j++) {
            // Compute Max in Row
            largestInRow = max(largestInRow, grid[i][j]);
        }

        for (int j = 0; j < grid[i].size(); j++) {

            // For Computing Max In This Column
            int largestInColumn = 0;
            for (int k = 0; k < grid.size(); k++) {
                // Compute Max in Column
                largestInColumn = max(largestInColumn, grid[k][j]);
            }

            // Min(Max, Max)
            int minSkyLine = min(largestInColumn, largestInRow);

            if (grid[i][j] < minSkyLine) {
                count += minSkyLine - grid[i][j];
            }
        }
    }
    return count;
}

int main() {
    // vector<vector<int>> arr = {{3,0,8,4},{2,4,5,7},{9,2,6,3},{0,3,1,0}};
    vector<vector<int>> arr = {{0,0,0},{0,0,0},{0,0,0}};
    int result = maxIncreaseKeepingSkyline(arr);
    cout << result << endl;
}