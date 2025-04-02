#include <iostream>
#include <vector>
#include <unordered_set>
#include <set>
using namespace std;

vector<vector<int>> findUniquePairs(vector<int> &arr) {
    unordered_set<int> seen;  
    set<pair<int, int>> pairs;  

    for (int num : arr) {
        int complement = -num; 
        if (seen.count(complement)) {
            
            pairs.insert({min(num, complement), max(num, complement)});
        }
        seen.insert(num);
    }

 
    vector<vector<int>> result;
    for (auto &p : pairs) {
        result.push_back({p.first, p.second});
    }

    return result;
}

int main() {
    vector<int> arr = {1, -1, 2, -2, 3, -3, 4, -4, 2, -2, 5};
    
    vector<vector<int>> pairs = findUniquePairs(arr);

    for (auto &p : pairs) {
        cout << "[" << p[0] << ", " << p[1] << "]" << endl;
    }

    return 0;
}
