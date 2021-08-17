## Arrays and Vectors

- Arrays are passed by reference in a function

- Searching -

  - Linear Search - O(n)
  - Binary Search - O(log n)

  - Pairs Problem
  - Peak Finding

- Reversing Arrays

  - Two Pointer Approach

- Subarray Computation

  - Subarray Sum I - Brute Force - O(n^3)
  - Subarray Sum II - Prefix Sum - O(n^2)
  - Subarray Sum I - Kadane's Algorithm - O(n)

- Vectors

  - Methods available on Vectors (push_back, size etc)
  - They are dynamic arrays, once the storage is full, it creates a new array of double the size and copies all the current values to the new array
  - Contiguous memory location
  - Elements can be accessed and added in constant / O(1) time
  - Unlike arrays, vectors are passed by value to a function (Use the & operator to pass by reference)

```cpp
int main() {

    vector<int> nums = {0, 1, 3};

    // Size of the Vector
    cout << "Size : " << nums.size() << endl;

    // Push into a Vector
    nums.push_back(12);

    // Pop from a Vector
    nums.pop_back();

    // Capacity of the Vector
    cout << "Capacity : " << nums.capacity() << endl;

    // Printing the values
    for(int i=0; i < nums.size(); i++) {
        cout << nums[i] << endl;
    }

    // Fill constructor
    vector<int> arr(2, 533); // (Size, Value)
}

```

- Basic Problems to Solve -
  - Largest Sum
  - Max Subarray Sum
  - Lower Bound
  - K Rotate
