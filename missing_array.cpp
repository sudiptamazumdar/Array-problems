#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int n = nums.size();
        int expected_sum = n * (n + 1) / 2;
        int actual_sum = 0;

        for (int num : nums) {
            actual_sum += num;
        }

        return expected_sum - actual_sum;
    }
};

int main() {
    Solution sol;
    vector<int> nums = {3, 0, 1};
    cout << sol.missingNumber(nums) << endl; // Output: 2
    return 0;
}
