// #include <iostream>
// #include <vector>

// using namespace std;

// // [2,3,5,1,3] O(n)
// //    0 1 2 3 4

// vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
    
//     vector<bool> result;

//     // Max in an array O(n)
//     int largest = 0;
//     for (int i = 0; i < candies.size(); i++) {
//         largest = max(largest, candies[i]);
//     }
    
//     // O(n)
//     for (int i = 0; i < candies.size(); i++) {
//         if (candies[i] + extraCandies >= largest) {
//             result.push_back(true);
//         } else {
//             result.push_back(false);
//         }
//     }
//     return result;
// }

// int printArray(vector<bool> arr) {
//     for(int i = 0; i < arr.size(); i++) {
//         cout << arr[i] << ", ";
//     }
//     cout << endl;
//     return 0;
// }

// int main() {
//     vector<int> a = {2,3,5,1,3};
//     vector<bool> res = kidsWithCandies(a, 3);
//     printArray(res);
// }

// // [[1,2,3],[4,5,6],[7,8,9]] = 5

// // O(n^2)

// // 1 2 3
// // 4 5 6
// // 7 8 9

// // MIT OCW Hash Tables

#include<iostream>
using namespace std;

int main()
{
    int a=6, b=9;
    for(int i=0; i <= b/2; i++) { 
        cout << a % i << endl;
        cout << i << " " << a << " " << b << endl;
    }
}