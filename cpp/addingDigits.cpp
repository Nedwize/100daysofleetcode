// A2OJ Ladder - 1300 
// Difficulty - 4
// http://codeforces.com/problemset/problem/260/A

#include <iostream>

using namespace std;

int main() {
    int a, b, n;
    cin >> a >> b >> n;

    while(n--) {
        for(int i=0; i <= 9; i++) {
            if((a*10 + i) % b == 0) {
                a = a*10 + i;
                break;
            }
        }
    }
    if(a % b != 0) {
        cout << -1 << endl;
    } else {
        cout << a << endl;
    }
}