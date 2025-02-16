#include <iostream>
#include <vector>
#include <algorithm> // For reverse()

using namespace std;

class Solution {
  public:
    void reverseInGroups(vector<int> &arr, int k) {
        int n = arr.size();

        // Reverse each group of size k
        for (int i = 0; i < n; i += k) {
            int left = i;
            int right = min(i + k - 1, n - 1); // Ensure we don't go out of bounds
            
            // Reverse the sub-array from index 'left' to 'right'
            while (left < right) {
                swap(arr[left], arr[right]);
                left++;
                right--;
            }
        }
    }
};

int main() {
    vector<int> arr = {1, 2, 3, 4, 5}; // Example array
    int k = 3;

    Solution obj;
    obj.reverseInGroups(arr, k);

    // Print the modified array
    for (int num : arr) {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}
