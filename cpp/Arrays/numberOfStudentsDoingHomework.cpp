// author: Nedwize
// 1450. Number of Students Doing Homework at a Given Time

#include <iostream>
#include <vector>

using namespace std;

int busyStudent(vector<int>& startTime, vector<int>& endTime, int queryTime) {
    int n = startTime.size();
    int count = 0;

    for (int i = 0; i < n; i++) {
        if(startTime[i] <= queryTime && queryTime <= endTime[i]) {
            count++;
        }
    }
    return count;
}

int main() {
    vector<int> arr = {1,2,3};
    vector<int> arr2 = {3,2,7};

    int a = busyStudent(arr, arr2, 4);
    cout << a << endl;
}