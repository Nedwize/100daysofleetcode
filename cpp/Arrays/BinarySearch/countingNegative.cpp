// 1351. Count Negative Numbers in a Sorted Matrix

#include <iostream>
#include <vector>

using namespace std;

int binarySearch(vector<int>& arr) {
    int start = 0;
    int end = arr.size() - 1;
    int mid;
    
    while(start <= end) {
        mid = start + (end - start) / 2;
        if(arr[mid] >= 0) {
            start = mid + 1;
        } else {
            end = mid - 1;
        }
        if(mid == -1) {
            return 0;
        }
    }
    return start;
}

int countNegatives(vector<vector<int>>& arr) {
    
    int start = 0;
    int count = 0;
    int end = arr.size() - 1;
    int mid;

    while(start <= end) {
        mid = start + (end - start) / 2;
        if(arr[mid][0] >= 0) {
            start = mid + 1;
        } else {
            end = mid - 1;
        }
    }
    
    
    int ind;
    if(start == -1) {
        ind = 0;
    } else {
        ind = start;
    }
    
    count += (arr.size() - ind) * arr[0].size();
    
    if(arr.size() == 1 && arr[0].size() == 1) {
        return count;
    }
    if(ind == 0) ind = arr.size();
    
    for(int i = 0; i < ind; i++) {
        count += arr[i].size() - binarySearch(arr[i]);
    }
    return count;
}

int main() {
    int count = 0;
    // vector<vector<int>> a = {{4,3,2,-1},{3,2,1,-1},{1,1,-1,-2},{-1,-1,-2,-3}};
    vector<vector<int>> a = {{1,1,-1,-2},{-1,-1,-2,-3}};
    for(int i = 0; i < a.size(); i++) {
        count += a[i].size() - binarySearch(a[i]);
    }
    cout << count << endl;
}