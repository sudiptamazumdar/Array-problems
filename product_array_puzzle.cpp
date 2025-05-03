#include <iostream>
#include <vector>
using namespace std;

vector<int> productArray(const vector<int>& arr) {
    int n = arr.size();
    vector<int> res(n, 1);

   
    int prefix = 1;
    for (int i = 0; i < n; i++) {
        res[i] = prefix;
        prefix *= arr[i];
    }

  
    int suffix = 1;
    for (int i = n - 1; i >= 0; i--) {
        res[i] *= suffix;
        suffix *= arr[i];
    }

    return res;
}

int main() {
    vector<int> arr = {10, 3, 5, 6, 2};
    vector<int> res = productArray(arr);

    cout << "Output: ";
    for (int val : res) {
        cout << val << " ";
    }
    cout << endl;

    return 0;
}
