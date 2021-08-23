// 374. Guess Number Higher or Lower
int guessNumber(int n) {
    int start = 0;
    int end = n;
    int mid = start + (end - start) / 2;

    while (start <= end)
    {
        mid = start + (end - start) / 2;

        if (guess(mid) == 0)
        {
            return mid;
        }
        else if (guess(mid) == -1)
        {
            end = mid - 1;
        }
        else if (guess(mid) == 1)
        {
            start = mid + 1;
        }
    }
    return -1;
}