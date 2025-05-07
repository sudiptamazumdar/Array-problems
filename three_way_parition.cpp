#include <iostream>
#include <vector>
using namespace std;

bool threeWayPartition(vector<int>& arr, int a, int b) {
    int n = arr.size();
    int low = 0, mid = 0, high = n - 1;

    while (mid <= high) {
        if (arr[mid] < a) {
            swap(arr[low], arr[mid]);
            low++;
            mid++;
        }
        else if (arr[mid] > b) {
            swap(arr[mid], arr[high]);
            high--;
        }
        else {
            mid++;
        }
    }

    return true;  // Always true if logic executes
}

int main() {
    vector<int> arr = {1, 2, 3, 3, 4};
    int a = 1, b = 2;

    if (threeWayPartition(arr, a, b)) {
        cout << "Modified Array: ";
        for (int x : arr) cout << x << " ";
        cout << endl;
    } else {
        cout << "Partition failed." << endl;
    }

    return 0;
}
