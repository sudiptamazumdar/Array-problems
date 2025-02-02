/*Given an array arr of size n, the task is to check if the given array is sorted in (ascending / Increasing / Non-decreasing) order. If the array is sorted then return True, else return False.*/

#include <iostream>
using namespace std;

class Solution {
public:
    bool arraySortedOrNot(int arr[], int n) {
        bool flag = true;
        for(int i = 0;i<n-1;i++)
        {
            if(arr[i]>arr[i+1])
            {

                return false;

            }
        }
        return true;
      
    }
};

int main()
{
    Solution s;
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int ans = s.arraySortedOrNot(arr, n);
    cout << ans;
    return 0;
}