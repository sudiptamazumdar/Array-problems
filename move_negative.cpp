#include <iostream>
#include <vector>
using namespace std;

void rearrange(int arr[], int n) {
    vector<int> temp;

    // Step 1: Store all positive elements
    for (int i = 0; i < n; i++) {
        if (arr[i] >= 0)
            temp.push_back(arr[i]);
    }

    // Step 2: Then store all negative elements
    for (int i = 0; i < n; i++) {
        if (arr[i] < 0)
            temp.push_back(arr[i]);
    }

    // Step 3: Copy back to original array
    for (int i = 0; i < n; i++) {
        arr[i] = temp[i];
    }
}

int main() {
    int arr[] = {1, -1, 3, 2, -7, -5, 11, 6};
    int n = sizeof(arr) / sizeof(arr[0]);

    rearrange(arr, n);

    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";

    return 0
