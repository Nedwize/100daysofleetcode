// 74. Search a 2D Matrix
// Intuitive Solution without wraparound

#include <iostream>
#include <vector>

using namespace std;

bool binarySearch(vector<int> arr, int target) {

    int start = 0;
    int end = arr.size() - 1;
    int mid = start + (end - start) / 2;

    while(start <= end) {
        mid = start + (end - start) / 2;
        if(arr[mid] == target) {
            return true;
        } else if (arr[mid] < target) {
            start = mid + 1;
        } else {
            end = mid - 1;
        }
    }
    return false;
}

bool searchMatrix(vector<vector<int>>& matrix, int target) {
    
    int start = 0;
    int end = matrix.size() - 1;
    int mid = start + (end - start) / 2;
    
    if (target < matrix[0][0]) return false;
    if (target == matrix[0][0]) return true;

    while(start <= end) {
        mid = start + (end - start) / 2;
        if(matrix[mid][0] == target) {
            return true;
        } else if (matrix[mid][0] < target) {
            start = mid + 1;
        } else {
            end = mid - 1;
        }
    }
    
    return binarySearch(matrix[end], target);
}

int main() {
    vector<vector<int>> matrix = {{1,3,5,7},{10,11,16,20},{23,30,34,60}};
    cout << searchMatrix(matrix, 3) << endl;
}

// Cleaner solution with wraparound
// We conceptually convert the 2D array into a 1D array

bool searchMatrix(vector<vector<int>>& matrix, int target) {
    
    int start = 0;
    int n = matrix.size();
    int m =  matrix[0].size();
    int end = (n * m) - 1;
    int mid;
    
    if (target < matrix[0][0]) return false;
    if (target == matrix[0][0]) return true;

    while(start <= end) {
        mid = start + (end - start) / 2;

        int row = mid / m;
        int column = mid % m;

        if(matrix[row][column] == target) {
            return true;
        } else if(matrix[row][column] < target) {
            start = mid + 1;
        } else {
            end = mid - 1;
        }
    }

    return false;
}
