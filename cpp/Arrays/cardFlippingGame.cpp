// author: Nedwize
// 822. Card Flipping Game
// Unsolved
#include <bits/stdc++.h>
#include <iostream>
#include <vector>

using namespace std;

int flipgame(vector<int>& fronts, vector<int>& backs) {
        // Create an unordered_set containing all the fronts.
        unordered_map <int, int> umap;

        for (int i = 0; i < fronts.size(); i++) {
                umap.insert(fronts[i], i);
        }
        
        // Turn a card - Check if it's available in the fronts

        for (int i = 0; i < fronts.size(); i++) {
                
        }
        
        // If not then return
}

int main() {

}