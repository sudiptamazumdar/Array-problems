#include <iostream>
#include <vector>
using namespace std;

vector<int> subarraySum(vector<int>& arr, int target) {
    int l = 0, sum = 0;

    for (int r = 0; r < arr.size(); r++) {
        sum += arr[r];  // Expand window

        // Shrink window if sum exceeds target
        while (sum > target && l <= r) {
            sum -= arr[l];
            l++;
        }

        // If sum matches target, return 1-based indices
        if (sum == target) {
            return {l + 1, r + 1};  // Convert 0-based to 1-based index
        }
    }
    
    return {-1};  // If no valid subarray is found
}

int main() {
    vector<int> arr = {1, 2, 3, 7, 5};
    int target = 12;
    
    vector<int> result = subarraySum(arr, target);
    
    // Print result
    for (int x : result) {
        cout << x << " ";
    }
    
    return 0;
}
