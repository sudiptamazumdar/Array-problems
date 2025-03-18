#include <iostream>
#include <vector>
using namespace std;



void leftRotate(vector<int>& arr, int d) {
    vector<int> temp;
    int n = arr.size();
    for (int i = 0; i < d; i++)
        {
            temp.push_back(arr[i]);
        }
    for (int i = d; i < n; i++)
    {
        arr[i - d] = arr[i];
    }
    for (int i = n - d; i < n; i++)
    {
        arr[i] = temp[i - (n - d)];
    }
}

int main()
{
    vector<int> arr = {1, 2, 3, 4, 5};
    int d = 2;

    Solution sol;
    sol.leftRotate(arr, d);

    for (int num : arr) {
        cout << num << " ";
    }
    return 0;
}
                
                
                
