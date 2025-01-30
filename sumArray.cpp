/*Given an array arr of size n, the task is to find the sum of all the elements in the array.*/

#include <iostream>
using namespace std;

class Solution{
public:
	int sum(int arr[], int n) {
	  int sum = 0;
      for (int i = 0; i < n; i++)
      {
        sum = sum + arr[i];
      }
      return sum;
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
    int ans = s.sum(arr, n);
    cout << ans;
}
