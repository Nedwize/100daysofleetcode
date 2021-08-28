class Solution {
public:
    int arrangeCoins(int n) {
        long start = 0;
        long end = n;
        long mid;
      
        while (start <= end) {
          mid = start + (end - start) / 2;
          
          if(mid*(mid+1)/2 <= n) {
            start = mid + 1;
          } else {
            end = mid - 1;
          }
        }
        return int(end);
    }
};