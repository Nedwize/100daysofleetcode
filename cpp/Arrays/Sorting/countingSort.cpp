// Counting Sort
// Used when there is a range given of the elements of an array
// Linear Time Complexity - O(n + Range)

#include <iostream>
#include <vector> 

using namespace std;

vector<int> countingSort(vector<int> arr) {

    // Step 1 - Find out th largest in element in the array to calculate the range
    int largest = -1;
    for (int i = 0; i < arr.size(); i++) {
        largest = max(arr[i], largest);
    }

    // Step 2 - Make an array of size Range + 1 to store all the values
    vector<int> countArray(largest + 1, 0);

    // Step 3 - Fill all the positions of the count array 
    for (int i = 0; i < arr.size(); i++) {
        countArray[arr[i]]++;
    }

    // Step 4 - Put all the values back into the initial array
    int j = 0;
    for (int i = 0; i < largest + 1; i++) {
        
        while(countArray[i] > 0) {
            arr[j] = i;
            countArray[i]--;
            j++;
        }
    }
    
    
    return arr;
}

int printArray(vector<int> arr) {
    for(int i = 0; i < arr.size(); i++) {
        cout << arr[i] << ", ";
    }
    cout << endl;
    return 0;
}

int main() {
    vector<int> a = {1, 8, 3, 9, 10, 10, 2, 4};
    vector<int> result = countingSort(a);
    printArray(result);
}