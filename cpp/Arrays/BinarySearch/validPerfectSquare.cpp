// 367. Valid Perfect Square

bool isPerfectSquare(int num) {
    long start = 1;
    long end = x;
    long mid = start + (end - start) / 2;
    
    while(start <= end) {
        mid = start + (end - start) / 2;
        
        if(mid*mid == x) return true;
        
        if(mid*mid < x) {
            start = mid + 1;       
        } else {
            end = mid - 1;
        }
    }
    return false;        
}