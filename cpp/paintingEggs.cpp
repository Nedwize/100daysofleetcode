#include <iostream>
#include <cstdlib>

using namespace std;

int main() {
    int n;
    int totalA = 0;
    int totalG = 0;
    string result = "";

    cin >> n;

    while(n--) {
        int a, g;
        cin >> a >> g;

        if(totalA < totalG) {
            totalA += a;
            result = result + "A";
        } else {
            totalG += g;
            result = result + "G";
        }
    }

    if(abs(totalA - totalG) > 500) {
        cout << -1 << endl;
    } else {
        cout << result << endl;
    }
}