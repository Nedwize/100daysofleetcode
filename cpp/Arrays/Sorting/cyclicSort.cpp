#include <iostream>
#include <vector>

using namespace std;

// 0, 1, 2, 3, 4
// 2, 1, 3, 4, 5
// 1, 2, 3, 4, 5

vector<int> cyclicSort(vector<int> arr) {
    int i = 0;
    while(i < arr.size()) {
        if (arr[i] < arr.size() && arr[i] != arr[arr[i]]) {
            swap(arr[i], arr[arr[i]]);
        } else {
            i++;
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

int missingNumber(vector<int>& arr) {

    int i;
     for(i = 0; i < arr.size(); i++) {
         if(arr[i] != i) {
             return i;
         }
     }
     return i;            
}

int main() {
    // vector<int> a = {3, 1, 0}; // Ex 1
    // vector<int> a = {0,1}; // Ex 2
    vector<int> a = {9,6,4,2,3,5,7,0,1}; // Ex 3
    printArray(a);
    vector<int> result = cyclicSort(a);
    printArray(result);
    int missing = missingNumber(result);
    cout << missing << ": Missing" << endl; 
    return 0;
}