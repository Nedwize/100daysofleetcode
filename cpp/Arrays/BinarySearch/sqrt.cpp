// 69. Sqrt(x)

#include <iostream>
#include <vector>

using namespace std;

int mySqrt(int x) {
    int start = 1;
    int end = x;
    int mid = start + (end - start) / 2;
    while(start <= end) {
        mid = start + (end - start) / 2;
        
        if(mid*mid == x) return mid;
        
        if(mid*mid > x) {
            start = mid + 1;       
        } else {
            end = mid - 1;
        }
    }
    return end;
}

int main() {
    cout << "Sqrt 9 : " << sqrt(9) << endl;
    cout << "Sqrt 17 : " << sqrt(17) << endl; 
}