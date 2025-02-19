/*You are given an array arr[], the task is to return a list elements of arr in alternate order (starting from index 0).

Examples:

Input: arr[] = [1, 2, 3, 4]
Output: 1 3
Explanation:
Take first element: 1
Skip second element: 2
Take third element: 3
Skip fourth element: 4*/

#include <iostream>
#include <vector>
using namespace std;

vector<int> getAlternates(vector<int> &arr)
{
    vector<int> v;
    for (int i = 0; i < arr.size(); i+=2)
    {
        v.push_back(arr[i]);
    }
    return v;
}

int main()
{
    int n;
    cin >> n;
    vector<int> v;
    vector<int> arr(n);
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    v = getAlternates(arr);
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }
    return 0;
}