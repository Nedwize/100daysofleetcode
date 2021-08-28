#include <iostream>
#include <vector> 

using namespace std;


    int findKthPositive(vector<int>& arr, int k) {
        int start = 0;
        int end = arr.size() - 1;
        int mid;

        if(arr[end] <= arr.size()) {
            return arr[end] + k;
        }
        
        if(arr[start] > k) {
            return k;
        }

        while(start <= end) {
            mid = start + (end - start) / 2;
            if(arr[mid] - mid - 1 < k) {
                start = mid + 1;
            } else {
                end = mid - 1;
            }
        }
        return k - (arr[end] - end - 1) + arr[end];
    };

int main() {
    vector<int> arr = {2,3,4,7,11}; // Ex 1
    // vector<int> arr = {1,2,3,4}; // Ex 2
    vector<int> arr = {2,3,4,9,11}; // k = 5
                    // 1,5,6,7,8
    int kth = findKthPositive(arr, 5);
    cout << kth << endl;
}