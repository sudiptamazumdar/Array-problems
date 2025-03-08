/*Given an array arr of integers and an index key(0-based index). Your task is to return the element present at the index key in the array.

Examples:

Input: key = 2 , arr = [10, 20, 30, 40, 50]
Output: 30
Explanation: The value of arr[2] is 30 .*/

#include <iostream>
using namespace std;

int getElements(int key, int arr[])
{
    int temp = 0;
    int n = sizeof(arr) / sizeof(arr[0]);
    for (int i = 0; i < n; i++)
    {
        temp = arr[key];
    }
    return temp;
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
    int key;
    cin >> key;
    cout << getElements(key, arr);
}