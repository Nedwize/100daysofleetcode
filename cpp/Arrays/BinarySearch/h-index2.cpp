// 275. H-Index II

#include <iostream>
#include <vector>

using namespace std;

// [1, 2, 3, 4, 10, 12, 24, 46, 56, 76, 86]


    int hIndex(vector<int>& citations) {
        int length = citations.size();
        int start = 0;
        int end = length - 1;
        int mid = start + (end - start) / 2;
        int result = 0;

        while(start <= end) {
            mid = start + (end - start) / 2;

            if(citations[mid] >= (length - mid)) {
                result = length - mid;
                end = mid - 1;
            } else {
                start = mid + 1;
            }
        }
        return result;  
    };

int main() {
    vector<int> arr = {0,1,3,5,6};
    int result = hIndex(arr);

    cout << result << endl;
}