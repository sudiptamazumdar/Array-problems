/*Given an array of N positive integers where all numbers occur even number of times except one number which occurs odd number of times. Find the exceptional number.

Example 1:

Input:
N = 7
Arr[] = {1, 2, 3, 2, 3, 1, 3}
Output: 3*/

#include <iostream>
using namespace std;

int findOddOccurrence(int arr[], int n) {
    int result = 0;
    
    for (int i = 0; i < n; i++) {
        result ^= arr[i];  // XOR all elements
    }
    
    return result;  // The remaining number is the one with an odd occurrence
}

int main() {
    int arr[] = {1, 2, 3, 2, 3, 1, 3};
    int n = sizeof(arr) / sizeof(arr[0]);
    
    cout << "Exceptional number: " << findOddOccurrence(arr, n) << endl;
    
    return 0;
}
