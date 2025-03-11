/*Given a sorted array arr and a value target, return an array of size 2. The first value is the number of elements less than or equal to the target, and the second value is the number of elements greater than or equal to the target.

Examples:

Input: arr[] = [1, 2, 8, 10, 11, 12, 19],  target = 0
Output: 0, 7
Explanation: There are no elements less or equal to 0 and 7 elements greater to 0.*/

#include <bits/stdc++.h>
using namespace std;

vector<int> getMoreAndLess(vector<int> &arr, int target) {
    // code here
    int count_less = 0, count_greater = 0;
    vector<int> ans;
    for (int i = 0; i < arr.size(); i++)
    {
        if (arr[i] <= target)
            count_less++;
    }
    for (int i = 0; i < arr.size(); i++)
    {
        if (arr[i] >= target)
            count_greater++;
    }
    ans = {count_less, count_greater};
    return ans;
}

int main()
{
    int n, target;
    cin >> target;
    cin >> n;
    vector <int>arr(n);
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    vector<int> ans = getMoreAndLess(arr, target);
    for (int i = 0; i < ans.size(); i++)
    {
        cout << ans[i] << " ";
    }
    return 0;
}
