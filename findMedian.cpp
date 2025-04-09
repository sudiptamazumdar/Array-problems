#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

double findMedian(vector<int>& arr) {
    sort(arr.begin(), arr.end());
    int n = arr.size();

    // If odd, return middle element
    if (n % 2 != 0) {
        return arr[n / 2];
    } 
    // If even, return average of two middle elements
    else {
        return (arr[n / 2 - 1] + arr[n / 2]) / 2.0;
    }
}

int main() {
    vector<int> arr1 = {90, 100, 78, 89, 67};
    vector<int> arr2 = {56, 67, 30, 79};

    cout << "Median 1: " << findMedian(arr1) << endl;  // Output: 89
    cout << "Median 2: " << findMedian(arr2) << endl;  // Output: 61.5

    return 0;
}
