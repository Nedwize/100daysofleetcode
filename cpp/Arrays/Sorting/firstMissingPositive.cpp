// 41. First Missing Positive


#include <iostream>
#include <vector>

using namespace std;

int firstMissingPositive(vector<int>& arr) {

    // Cyclic Sort
    int i = 1;
    while(i < arr.size()) {
        if(arr[i] > 0 && arr[i] <= arr.size() && arr[i] != arr[arr[i] - 1]) {
            swap(arr[i], arr[arr[i] - 1]);
        } else {
            i++;
        }
    }

    for(int i = 0; i < arr.size(); i++) {
        if(arr[i] != i + 1) {
            return i + 1;
        }
    }

    return arr.size() + 1;
}

int printArray(vector<int> arr) {
    for(int i = 0; i < arr.size(); i++) {
        cout << arr[i] << ", ";
    }
    cout << endl;
    return 0;
}

int main() {
    vector<int> a = {1,2,0}; // Ex 1
    // vector<int> a = {7,8,9,11,12}; // Ex 2
    printArray(a);
    int result = firstMissingPositive(a);
    cout << result << endl;
} 