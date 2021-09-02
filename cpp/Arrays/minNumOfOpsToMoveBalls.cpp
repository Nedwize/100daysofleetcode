// author: Nedwize
// 1769. Minimum Number of Operations to Move All Balls to Each Box

#include <iostream>
#include <vector>

using namespace std;

int printArray(vector<int> arr) {
    for(int i = 0; i < arr.size(); i++) {
        cout << arr[i] << ", ";
    }
    cout << endl;
    return 0;
}

vector<int> minOperations(string boxes) {
    vector<int> indexes;
    vector<int> ans;

    for (int i = 0; i < boxes.length(); i++) {
        if(boxes[i] == '1') indexes.push_back(i);
    }

    int sum = 0;
    for (int i = 0; i < boxes.length(); i++) {
        sum = 0;
        for (int j = 0; j < indexes.size(); j++) {
            sum += abs(i - indexes[j]);
        }
        ans.push_back(sum);
    }      
    return ans;
}

int main() {
    string a = "001011";
    minOperations(a);
}