/*Given an array arr[], swap the kth element from the beginning with the kth element from the end.

Note: 1-based indexing is followed.

Examples :

Input: arr[] = [1, 2, 3, 4, 5, 6, 7, 8], k = 3
Output: [1, 2, 6, 4, 5, 3, 7, 8]
Explanation: 3rd element from beginning is 3 and 3rd element from end is 6, so we replace 3 & 6.*/

#include <iostream>
#include <vector>
using namespace std;

void swapKth(vector<int> &arr, int k) {
   
    int n = arr.size();
    if (n < k) return;
    swap(arr[k - 1], arr[n - k]);
    
}

int main()
{
    int n;
    cin >> n;
    vector<int> arr(n);
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int k;
    cin >> k;
    swapKth(arr, k);
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;

}