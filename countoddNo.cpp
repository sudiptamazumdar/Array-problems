/*Given an array of n elements. The task is to return the count of the number of odd in the array.*/

#include <iostream>
using namespace std;

class Solution{
public:
    int countOdd(int arr[], int n){
        int count = 0;
        for (int i = 0; i < n; i++)
        {
            if (arr[i] % 2 != 0)
                count++;
        }
        return count;
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
    int ans = s.countOdd(arr, n);
    cout << ans;
    return 0;
}