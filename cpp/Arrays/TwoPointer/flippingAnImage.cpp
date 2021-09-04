// author: Nedwize
// 832. Flipping an Image

#include <iostream>
#include <vector>

using namespace std;

vector<vector<int>> flipAndInvertImage(vector<vector<int>>& image) {
    int n = image[0].size();
        
        // Flip Horizontally
        for (int i = 0; i < image.size(); i++) {
            for (int j = 0; j < n / 2; j++) {
                int temp = arr[i][j];
                arr[i][j] = arr[i][n - j - 1];
                arr[i][n - j - 1] = temp;
            }
        }

        // Invert 0s and 1s
        for (int i = 0; i < image.size(); i++) {
            for (int j = 0; j < n; j++) {
                if(arr[i][j] == 0) {
                    arr[i][j] == 1;
                } else {
                    arr[i][j] == 0;
                }
            }
        }
}

int main() {

}