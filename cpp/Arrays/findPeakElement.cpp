// Finding Peak Element in a sorted array

#include <iostream>
#include <vector>

using namespace std;

int findPeakElement(vector<int> arr) {
      int start = 0;
      int end = arr.size() - 1;
      int mid = start + (end - start) / 2;

      while(start < end) {
          mid = start + (end - start) / 2;

          if (arr[mid] < arr[mid+1]) {
              start = mid + 1;
          } else if (arr[mid] > arr[mid+1]) {
              end = mid;
          }       
      }
      return start;
};

int main() {
    vector<int> arr = {1, 2, 3, 5, 6, 8, 10, 12, 25, 78, 67, 54, 52, 37, 31, 26, 21, 16, 8, 4, 3, 2};
    int ind = findPeakElement(arr);
    cout << "Found at: " << ind << endl;
}