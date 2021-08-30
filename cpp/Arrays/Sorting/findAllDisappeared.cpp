#include <iostream>
#include <vector>

using namespace std;

vector<int> findDisappearedNumbers(vector<int>& arr) {

    vector<int> result;
    // Cyclic Sort
    int i = 1;
    while(i < arr.size()) {
        if(arr[i] <= arr.size() && arr[i] != arr[arr[i] - 1]) {
            swap(arr[i], arr[arr[i] - 1]);
        } else {
            i++;
        }
    }

    for(int i = 0; i < arr.size(); i++) {
        if(arr[i] != i + 1) {
            result.push_back(i + 1);
        }
    }

    return result;
}

int printArray(vector<int> arr) {
    for(int i = 0; i < arr.size(); i++) {
        cout << arr[i] << ", ";
    }
    cout << endl;
    return 0;
}

int main() {
    // vector<int> a = {4,3,2,7,8,2,3,1}; // Ex 1
    vector<int> a = {1,1}; // Ex 2
    printArray(a);
    vector<int> result = findDisappearedNumbers(a);
    printArray(result); 
} 