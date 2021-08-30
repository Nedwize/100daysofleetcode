// author: Nedwize
// 1491. Average Salary Excluding the Minimum and Maximum Salary

// Doesn't have to use Sorting
// Calculate the Max and Min, subtract both from total then take average;

#include <iostream>
#include <vector>

using namespace std;

double average(vector<int>& salary) {
    int total = 0;
    int largest = salary[0];
    int smallest = salary[0];

    for (int i = 0; i < salary.size(); i++) {
        largest = max(largest, salary[i]);
        smallest = min(smallest, salary[i]);
        total += salary[i];
    }

    // double avg = ( total - (smallest + largest) ) / (salary.size() - 2);
    return ( total - (smallest + largest) ) / (salary.size() - 2.0);
}

int main() {
    // vector<int> a = {4000,3000,1000,2000}; // Ex 1
    // vector<int> a = {1000,2000,3000}; // Ex 2
    // vector<int> a = {6000,5000,4000,3000,2000,1000}; // Ex 3
    // vector<int> a = {8000,9000,2000,3000,6000,1000}; // Ex 4
    vector<int> a = {48000,59000,99000,13000,78000,45000,31000,17000,39000,37000,93000,77000,33000,28000,4000,54000,67000,6000,1000,11000}; // Ex 5
    double result = average(a);
    cout << "Avg: " << result << endl;
}
