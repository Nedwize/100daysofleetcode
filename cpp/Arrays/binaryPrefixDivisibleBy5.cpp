// author: Nedwize
// 1018. Binary Prefix Divisible By 5
// Unsolved
#include <iostream>
#include <vector>

using namespace std;

// Function to convert binary to decimal
int binaryToDecimal(int n)
{
    int num = n;
    int dec_value = 0;
 
    // Initializing base value to 1, i.e 2^0
    int base = 1;
 
    int temp = num;
    while (temp) {
        int last_digit = temp % 10;
        temp = temp / 10;
 
        dec_value += last_digit * base;
 
        base = base * 2;
    }
 
    return dec_value;
}

int printArray(vector<bool> arr) {
    for(int i = 0; i < arr.size(); i++) {
        cout << arr[i] << ", ";
    }
    cout << endl;
    return 0;
}

vector<bool> prefixesDivBy5(vector<int>& nums) {

    int sum = 0;
    vector<bool> ans;
    for (int i = 0; i < nums.size(); i++) {
        sum = sum*10 + nums[i];
        if(binaryToDecimal(sum) % 5 == 0) {
            ans.push_back(true);
        } else {
            ans.push_back(false);
        }
    }
    printArray(ans);
    return ans;
}

int main() {
    // vector<int> n = {0,1,1};
    // vector<int> n = {1,1,1};
    // vector<int> n = {0,1,1,1,1,1};    
    vector<int> n = {1,1,1,0,1};
    prefixesDivBy5(n);
}