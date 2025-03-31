#include <bits/stdc++.h>
#include <vector>
using namespace std;

vector<int> findLeaders(vector<int>& arr) {
    int n = arr.size();
    vector<int> leaders;
    int maxRight = arr[n - 1];  
    leaders.push_back(maxRight);

    // Traverse from right to left
    for (int i = n - 2; i >= 0; i--) {
        if (arr[i] >= maxRight) {  // If current element is a leader
            maxRight = arr[i];  // Update maxRight
            leaders.push_back(arr[i]);
        }
    }

    // Reverse the vector to maintain correct order
    reverse(leaders.begin(), leaders.end());
    return leaders;
}

int main() {
    vector<int> arr = {16, 17, 4, 3, 5, 2};
    vector<int> leaders = findLeaders(arr);

    for (int num : leaders) {
        cout << num << " ";
    }
    return 0;
}
