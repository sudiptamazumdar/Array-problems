#include <iostream>
#include <vector>
#include <unordered_map>
#include <algorithm>
using namespace std;

vector<vector<int>> findPairs(vector<int>& arr) {
    unordered_map<int, bool> seen;
    vector<vector<int>> result;

    for (int num : arr) {
        if (seen.count(-num) && !seen[-num]) {
            result.push_back({min(num, -num), max(num, -num)});
            seen[-num] = true;
            seen[num] = true;
        } else if (!seen.count(num)) {
            seen[num] = false;
        }
    }

    sort(result.begin(), result.end()); // sort final result
    return result;
}

int main() {
    vector<int> arr = {-1, 0, 1, 2, -1, -4};
    vector<vector<int>> pairs = findPairs(arr);

    cout << "Output: [";
    for (int i = 0; i < pairs.size(); ++i) {
        cout << "[" << pairs[i][0] << ", " << pairs[i][1] << "]";
        if (i != pairs.size() - 1) cout << ", ";
    }
    cout << "]" << endl;

    return 0;
}
