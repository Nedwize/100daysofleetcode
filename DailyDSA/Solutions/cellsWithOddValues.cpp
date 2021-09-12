// author: Nedwize
// 1252. Cells with Odd Values in a Matrix

#include <iostream>
#include <vector>

using namespace std;

int printArray(vector<vector<int>> arr) {
    for(int i = 0; i < arr.size(); i++) {
        for (int j = 0; j < arr[i].size(); j++) {
            cout << arr[i][j] << ", ";
        }
        cout << endl;
    }
    cout << endl;
    return 0;
}

int oddCells(int m, int n, vector<vector<int>>& indices) {
    // int m, int n, vector<vector<int>>& indices
    // Create a 2D array of dimensions m x n and values 0
    vector<vector<int>> arr(m, vector<int>(n,0));
    
    printArray(arr);

    for (int i = 0; i < indices.size(); i++) {
        
        int row = indices[i][0];

        for (int j = 0; j < arr[row].size(); j++) {
            ++arr[row][j];
        }

        int column = indices[i][1];
        for (int k = 0; k < arr.size(); k++) {
            ++arr[k][column];
        }
    }
    
    // Count the number of odd numbers
    int count = 0;
    for (int i = 0; i < arr.size(); i++) {
        for (int j = 0; j < arr[i].size(); j++) {
            if(arr[i][j] % 2 != 0) count++;
        }
    }
    
    cout << "-------------------" << endl << endl;

    printArray(arr);

    return count;
}

int main() {
    vector<vector<int>> a = {{1,1},{0,0}};
    int b = oddCells(2, 2, a);
    cout << "Result: " << b << endl;
}
