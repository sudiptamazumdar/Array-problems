#include <iostream>
#include <vector>
using namespace std;

vector<int> rearrangeAlternately(vector<int>& arr) {
    vector<int> pos, neg;

    for (int num : arr) {
        if (num >= 0)
            pos.push_back(num);
        else
            neg.push_back(num);
    }

    vector<int> result;
    int i = 0, j = 0;

    while (i < pos.size() && j < neg.size()) {
        result.push_back(pos[i++]);
        result.push_back(neg[j++]);
    }

   
    while (i < pos.size()) {
        result.push_back(pos[i++]);
    }


    while (j < neg.size()) {
        result.push_back(neg[j++]);
    }

    return result;
}

int main() {
    vector<int> arr = {9, 4, -2, -1, 5, 0, -5, -3, 2};
    vector<int> res = rearrangeAlternately(arr);

    cout << "Output: ";
    for (int num : res) {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}
