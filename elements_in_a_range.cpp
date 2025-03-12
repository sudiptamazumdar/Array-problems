/*Given an array arr[] containing positive elements. A and B are two numbers defining a range. The task is to check if the array contains all elements in the given range (inclusive).

Note: If the array contains all elements in the given range return true otherwise return false.

Examples :

Input: n = 7, A = 2, B = 5, arr[] =  {1, 4, 5, 2, 7, 8, 3}
Output: True*/
#include <iostream>
#include <unordered_set>
using namespace std;

bool check_elements(int arr[], int n, int A, int B) {
    unordered_set<int> elements(arr, arr + n); // Store array elements in a set

    // Check if all numbers from A to B are present
    for (int i = A; i <= B; i++) {
        if (elements.find(i) == elements.end()) {
            return false; // If any number is missing, return false
        }
    }

    return true; // All numbers from A to B are present
}

int main() {
    int arr[] = {1, 4, 3, 2, 5};
    int n = sizeof(arr) / sizeof(arr[0]);
    int A = 2, B = 5;

    if (check_elements(arr, n, A, B)) {
        cout << "All elements from " << A << " to " << B << " are present." << endl;
    } else {
        cout << "Some elements from " << A << " to " << B << " are missing." << endl;
    }

    return 0;
}
