// Finding Pivot or Peak in a rotated sorted array

#include <iostream>
#include <vector>

using namespace std;

// [4,5,6,7,0,1,2,3]

int findPivot(vector<int> arr) {

    int start = 0;
    int end = arr.size() - 1;
    int mid;

    while(start <= end) {
        mid = start + (end - start) / 2;
        
        if(arr[mid] > arr[mid + 1]) {
            return mid;
        } else if(arr[mid - 1] > arr[mid]) {
            return mid - 1;
        } else if(arr[mid] > arr[start]) {
            start = mid + 1;
        } else {
            end = end - 1;
        }
    }
    return -1;
}

int main() {
    vector<int> arr = {4,5,6,7,0,1,2,3};
    int index = findPivot(arr);
    cout << "Found At: " << index << endl;
}