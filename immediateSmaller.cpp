
#include <iostream>
#include<vector>
using namespace std;
class Solution {
    public:
      void immediateSmaller(vector<int>& arr) {
          int n = arr.size();
          for (int i = 0; i < n - 1; i++)
          {
              if (arr[i + 1] < arr[i])
                  arr[i] = arr[i + 1];
              else
                  arr[i] = -1;
          }
          arr[n - 1] = -1;
      }
  };

  int main() {
    int n;
    cin >> n;
    vector<int> v;
    vector<int> arr(n);
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    Solution obj;
    obj.immediateSmaller(arr);

    // Print the modified array
    for (int num : arr) {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}
