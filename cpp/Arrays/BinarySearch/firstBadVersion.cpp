// 278. First Bad Version
// The API isBadVersion is defined for you.
// bool isBadVersion(int version);

class Solution {
public:
    int firstBadVersion(int n) {
        long start = 1;
        long end = n;
        long mid = start + (end - start) / 2;

        while (start <= end)
        {
            mid = start + (end - start) / 2;

            if(isBadVersion(mid)) {
                end = mid - 1;
            }
            else
            {
                start = mid + 1;
            }
        }
        return start;
    }
};