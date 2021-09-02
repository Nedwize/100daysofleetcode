// author: Nedwize
// 1637. Widest Vertical Area Between Two Points Containing No Points

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

    int maxWidthOfVerticalArea(vector<vector<int>>& points) { 
        vector<int> iArr;
        for (int i = 0; i < points.size(); i++) {
            iArr.push_back(points[i][0]);
        }
        
        sort(iArr.begin(), iArr.end());

        int maxDiff = 0;
        for(int i = 0; i < iArr.size() - 1; i++) {
            maxDiff = max(iArr[i + 1][0] - iArr[i][0], maxDiff);
        }        
        return maxDiff;
    }

int main() {
    vector<vector<int>> arr = {{3,1},{9,0},{1,0},{1,4},{5,3},{8,8}};
    int m = maxWidthOfVerticalArea(arr);
    cout << "Max " << m << endl;
}