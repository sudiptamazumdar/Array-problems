/*Given an array arr, the task is to find whether the arr is palindrome or not. If the arr is palindrome then return true else return false.

An array is said to be palindrome if its reverse array matches the original array. 

Examples:

Input: arr = [1, 2, 3, 2, 1]
Output: true
Explanation: Here we can see we have [1, 2, 3, 2, 1] if we reverse it we can find [1, 2, 3, 2, 1] which is the same as before. So, the answer is true.*/

#include <iostream>
#include <vector>
using namespace std;

bool isPerfect(int arr[]) {
     vector<int> v;
    int n = sizeof(arr) / sizeof(arr[0]);
  
    for (int i = n - 1; i >= 0; i--) {
        v.push_back(arr[i]);
    }
    
    for (int i = 0; i < n; i++) {
        if (arr[i] != v[i])  
            return false;  
    }
    return true; 
}

int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    cout << isPerfect(arr);
    return 0;
}