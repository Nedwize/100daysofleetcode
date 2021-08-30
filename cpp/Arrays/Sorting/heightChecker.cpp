// author: Nedwize
// 1051. Height Checker

// Counting Sort

#include <iostream>
#include <vector>

using namespace std;

int printArray(vector<int> arr) {
    for(int i = 0; i < arr.size(); i++) {
        cout << arr[i] << ", ";
    }
    cout << endl;
    return 0;
}

int heightChecker(vector<int>& heights) {

        // Figure out the largest height in the array
        int largest = -1;
        for (int i = 0; i < heights.size(); i++) {
            largest = max(heights[i], largest);
        }

        // Create a new vector of size Range
        vector<int> countingArray(largest + 1, 0);

        // Count the heights
        for (int i = 0; i < heights.size(); i++) {
            countingArray[heights[i]]++;
        }
        
        // Put heights together again
        vector<int> resolvedHeights(heights.size(), 0);
        int j = 0; 
        for (int i = 0; i < countingArray.size(); i++) {
            while(countingArray[i] > 0) {
                resolvedHeights[j] = i;
                j++;
                countingArray[i]--;
            } 
        }
        
        int count = 0;
        // cout << heights.size() << " " << resolvedHeights.size() << endl;
        for (int i = 0; i < heights.size(); i++) {
            // cout << heights[i] << " " << resolvedHeights[i] << endl;
            if(heights[i] != resolvedHeights[i]) {
                count++;
            }
        }
        
        return count;
}

int main() {
    // vector<int> a = {1,1,4,2,1,3}; // Ex 1
    // vector<int> a = {5,1,2,3,4}; // Ex 2
     vector<int> a = {1,2,3,4,5}; // Ex 3
    int c = heightChecker(a);
    cout << "Count : " << c << endl;
}