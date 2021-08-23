// 349. Intersection of Two Arrays
// Sorting, Hash, Revisit

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

int binarySearch(vector<int> arr, int target)
{
    int start = 0;
    int end = arr.size() - 1;

    while (start <= end)
    {
        int mid = start + (end - start) / 2;

        if (arr[mid] == target)
        {
            return mid;
        }
        else if (arr[mid] > target)
        {
            end = mid - 1;
        }
        else if (arr[mid] < target)
        {
            start = mid + 1;
        }
    }
    return -1;
}

vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        
    vector<int> result = {};

    for (int i = 0; i < nums1.size(); i++)
    {   
        if(binarySearch(nums2, nums1[i]) != -1) {
            result.push_back(nums1[i]);
        }
    }

    return result;
}

int main() {
    vector<int> nums1 = {4,9,5};
    vector<int> nums2 = {9,4,9,8,4};

    vector<int> n1 = bubbleSort(nums1);
    vector<int> n2 = bubbleSort(nums2);

    for(int i = 0; i < n1.size(); i++) {
        cout << n1[i] << ",";
    }
    cout << endl;

    for(int i = 0; i < n2.size(); i++) {
        cout << n2[i] << ",";
    }
    cout << endl;

    vector<int> res = intersection(n1, n2);

    for(int i = 0; i < res.size(); i++) {
        cout << res[i] << ",";
    }
    cout << endl;
}