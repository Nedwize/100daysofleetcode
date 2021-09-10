// author: Nedwize
// 5864. The Number of Weak Characters in the Game

#include <iostream>
#include <vector>

using namespace std;

int numberOfWeakCharacters(vector<vector<int>>& properties) {

    int count = 0;
    int flag = 0;
    int j = 0;
    for (int i = 0; i < properties.size(); i++) {
        for (int j = 0; j < properties.size(); j++) {
            if(i != j) {
                if(properties[i][0] < properties[j][0] &&  properties[i][1] < properties[j][1]) {
                    count++;
                    flag = 1;
                    break;
                }
            }
        }
    }
    return count;
}

int main() {
    vector<vector<int>> a =  {{7,7},{1,2},{9,7},{7,3},{3,10},{9,8},{8,10},{4,3},{1,5},{1,5}};
    int re = numberOfWeakCharacters(a);
    cout << re << endl;
}