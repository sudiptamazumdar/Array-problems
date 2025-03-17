#include <iostream>
#include <vector>
using namespace std;

int minJumps(vector<int>& arr) {
    int n = arr.size();
    
    if (n == 1) return 0; // Already at the end
    if (arr[0] == 0) return -1; // Can't move from the start

    int jumps = 0, currEnd = 0, farthest = 0;

    for (int i = 0; i < n - 1; i++) {
        farthest = max(farthest, i + arr[i]); // Update max reachable index

        // If we've reached the end of the current jump range
        if (i == currEnd) {
            jumps++;  // Take a jump
            currEnd = farthest; // Update range
            
            // If we reached or exceeded the last index, return jumps
            if (currEnd >= n - 1) return jumps;
        }
    }

    return -1; // If we never reach the last index
}

int main() {
    vector<int> arr = {1, 3, 5, 8, 9, 2, 6, 7, 6, 8, 9};
    cout << "Minimum jumps: " << minJumps(arr) << endl;
    return 0;
}
