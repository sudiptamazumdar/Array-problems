/*You are given an array arr(0-based index). The size of the array is given by sizeOfArray. You need to insert an element at given index.

Example 1:

Input:
sizeOfArray = 6
arr[] = {1, 2, 3, 4, 5}
index = 5, element = 90
Output: 1 2 3 4 5 90*/

#include <iostream>
using namespace std;

void insertAtArray(int arr[], int sizeOfArray, int index, int element)
{
    for (int i = sizeOfArray - 1; i > index; i--)
    {
        arr[i] = arr[i - 1];
    }
    arr[index] = element;
    for (int i = 0; i < sizeOfArray; i++)
    {
        cout << arr[i];
    }
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
    int index, element;
    cin >> index;
    cin >> element;
    insertAtArray(arr, n, index, element);
    return 0;
}