 // author: Nedwize
 // 11. Container With Most Water

 #include <iostream>
 #include <vector>

 using namespace std;

int maxArea(vector<int>& height) {
    
    int start = 0;
    int end = height.size() - 1;
    int result = 0;

    while(start < end) {
        result = max(result, ((end - start) * min(height[end], height[start])));

        if(height[start] < height[end]) {
            start++;
        } else {
            end--;
        }
    }
    return result;
}

 int main() {

 }