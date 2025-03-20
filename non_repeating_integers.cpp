#include <iostream>
#include <vector>
using namespace std;

void nonRepeatingInteger(vector<int> arr)
{
    int n = arr.size();
    if (arr[0] != arr[1]) cout << arr[0] << " ";

    for (int i = 1; i < n - 1; i++)
    {
        if ((arr[i - 1] != arr[i]) && (arr[i] != arr[i + 1]))
        {
            cout << arr[i] << " ";
        }
    }
    if (arr[n - 1] != arr[n - 2]) cout << arr[n - 1] << " ";
}

int main()
{
    int n;
    cin >> n;
    vector<int> nums(n);
    for (int i = 0; i < n; i++)
    {
        cin >> nums[i];
    }
    nonRepeatingInteger(nums);
    return 0;
}
