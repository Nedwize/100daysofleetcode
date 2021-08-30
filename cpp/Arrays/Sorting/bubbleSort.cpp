#include <iostream>
#include <vector>

using namespace std;

vector<int> bubbleSort(vector<int> arr) {

    for (int i = 0; i < arr.size(); i++) {
        for (int j = 1; j < arr.size() - i; j++) {
            if(arr[j] < arr[j-1]) {
                swap(arr[j], arr[j-1]);
            }
        }  
    }
    return arr;
}

int printArray(vector<int> arr) {
    for(int i = 0; i < arr.size(); i++) {
        cout << arr[i] << ',';
    }
    cout << endl;
}

int main() {
    vector<int> arr = { 11, 2, 9, 13, 57, 25, 17, 1, 90, 3 };
    printArray(arr);
    
    vector<int> a = bubbleSort(arr);
    
    cout << "Sorted" << endl;
    printArray(a);
}

