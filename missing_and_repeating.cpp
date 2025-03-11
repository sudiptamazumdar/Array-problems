/*Given an unsorted array arr of positive integers. One number a from the set [1, 2,....,n] is missing and one number b occurs twice in the array. Find numbers a and b.

Note: The test cases are generated such that there always exists one missing and one repeating number within the range [1,n].

Examples:

Input: arr[] = [2, 2]
Output: [2, 1]*/

#include <bits/stdc++.h>
using namespace std;

vector<int> findTwoElement(vector<int>& arr) {
    
   int n = arr.size();
    unordered_map<int,int>freq; // Frequency array to store count of each number
    int repeating = -1, missing = -1;

    // Count occurrences of each number
    for (int num : arr) {
        freq[num]++;
    }

    // Find repeating and missing number
    for (int i = 1; i <= n; i++) {
        if (freq[i] == 2) repeating = i;  // Found the repeating number
        if (freq[i] == 0) missing = i;    // Found the missing number
    }

    return {repeating, missing};
}

int main()
{
    int n;
    cin >> n;
    vector <int>arr(n);
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    vector<int> ans = findTwoElement(arr);
    for (int i = 0; i < ans.size(); i++)
    {
        cout << ans[i] << " ";
    }
    return 0;

}