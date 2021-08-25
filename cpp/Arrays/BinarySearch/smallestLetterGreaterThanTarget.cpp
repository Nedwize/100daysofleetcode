// 744. Find Smallest Letter Greater Than Target

#include <iostream>
#include <vector>

using namespace std;

int binarySearch(vector<char>& arr, char target)
{
    int start = 0;
    int end = arr.size() - 1;

    while (start <= end)
    {
        int mid = start + (end - start) / 2;

        if (int(arr[mid]) == int(target))
        {
            return mid+1;
        }
        else if (int(arr[mid]) > int(target))
        {
            end = mid - 1;
        }
        else if (int(arr[mid]) < int(target))
        {
            start = mid + 1;
        }
    }
    return start;
}

char nextGreatestLetter(vector<char>& letters, char target) {
    int index = binarySearch(letters, target);
    cout << letters[index] << endl;
    cout << "Index: " << index << endl;
}

int main()
{
    vector<int> arr = {"c","f","j"};
    char tar = 'c';
    nextGreatestLetter(arr, tar)
}