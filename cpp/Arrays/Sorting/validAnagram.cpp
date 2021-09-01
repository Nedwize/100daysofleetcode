// author: Nedwize
// 242. Valid Anagram

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

bool isAnagram(string s, string t) {

    if(s.size() != t.size()) return false;
    
    sort(s.begin(), s.end());
    sort(t.begin(), t.end());

    for (int i = 0; i < t.size(); i++) {
        if(s[i] != t[i]) return false;
    }
    return true;
}

int main() {
    bool is = isAnagram("anagram", "nagaram");
    cout << is << endl;
}