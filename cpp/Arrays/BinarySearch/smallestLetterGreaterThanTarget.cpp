// 744. Find Smallest Letter Greater Than Target

#include <iostream>
#include <vector>

using namespace std;

char nextGreatestLetter(vector<char>& letters, char target) {
    int index = binarySearch(letters, target);
    cout << letters[index] << endl;
    cout << "Index: " << index << endl;
}

int main()
{
    vector<char> arr = {'c','f','j'};
    char tar = 'c';
    nextGreatestLetter(arr, tar);
}

// Another Approach O(logn)

char nextGreatestLetter(vector<char>& arr, char target) {
    int start = 0;
    int end = arr.size() - 1;
    char res;
  
    while (start <= end)
    {
        int mid = start + (end - start) / 2;

        if (int(arr[mid]) <= int(target))
        {
            start = mid + 1;
        }
        else
        {
            res = arr[mid];
            end = mid - 1;
        }
    }
    if(arr[start] <= target) {
        return arr[0];
    }  
    return res;
}