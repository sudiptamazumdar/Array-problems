#include <iostream>
#include <vector>
using namespace std;

int transitionPoint(vector<int>& arr) {
    int low = 0, high = arr.size() - 1;
    int result = -1;

    while (low <= high) {
        int mid = low + (high - low) / 2;

      
        if (arr[mid] == 1) {
            result = mid;
            high = mid - 1;
        }
      
        else {
            low = mid + 1;
        }
    }

    return result;
}

int main() {
    vector<int> arr = {0, 0, 0, 1, 1};
    int index = transitionPoint(arr);
    cout << "Transition Point: " << index << endl;

    return 0;
}
