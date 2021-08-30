#include <iostream>
#include <vector>

using namespace std;

// 0, 1, 2, 3, 4
// 2, 1, 3, 4, 5
// 1, 2, 3, 4, 5

vector<int> cyclicSort(vector<int> arr) {

    for(int i=0; i < arr.size(); i++) {
        if(arr[i] != i+1) {
            swap(arr[i], arr[arr[i] - 1]);
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
    vector<int> a = {2, 1, 5, 4, 3};
    printArray(a);
    vector<int> result = cyclicSort(a);
    printArray(result);
    return 0;
}