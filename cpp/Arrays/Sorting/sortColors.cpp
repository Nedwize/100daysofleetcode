// author: Nedwize
// 75. Sort Colors
// Using Counting Sort

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

void sortColors(vector<int>& nums) {
    // We already know the largest element in the array = 2;
    // So no need of computing that

    // Creating an array of size = Range
    vector<int> countingArray(2 + 1, 0); // Largest value in the array + 1

    // Looping over nums to count the number of occurences
    for (int i = 0; i < nums.size(); i++) {
        countingArray[nums[i]]++;
    }
    // Putting back all the values
    int j = 0;
    for (int i = 0; i < countingArray.size(); i++) {
        while (countingArray[i] > 0) {
            nums[j] = i;
            countingArray[i]--;
            j++;
        }
    }
}

int main() {
    // vector<int> a = {2,0,2,1,1,0}; // Ex 1
    vector<int> a = {2,0,1}; // Ex 2
    sortColors(a);
}