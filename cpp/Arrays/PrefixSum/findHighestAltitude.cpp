// author: Nedwize
// 1732. Find the Highest Altitude

#include <iostream>
#include <vector>

using namespace std;

int largestAltitude(vector<int>& gain) {

    int n = gain.size() + 1;
    vector<int> prefix(n, 0);
    int largest = INT_MIN;
    
    // Prefix Sum
    for (int i = 1; i < n; i++) {
        prefix[i] = prefix[i - 1] + gain[i - 1];
    }

    for (int i = 0; i < n; i++) {
        largest = max(largest, prefix[i]);
    }
    
    return largest;
}

int main() {
 vector<int> a = {-4,-3,-2,-1,4,3,2};
 int l = largestAltitude(a);
 cout << l << endl;
}