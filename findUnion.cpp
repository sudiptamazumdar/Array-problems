#include <iostream>
#include <vector>
#include <set>
using namespace std;

vector<int> findUnion(vector<int> &a, vector<int> &b) {
    set<int> st(a.begin(), a.end()); // Insert all elements of `a`
    st.insert(b.begin(), b.end());   // Insert all elements of `b`

    vector<int> union1;
    for (auto it : st) {   // Correct way to iterate over a set
        union1.push_back(it);
    }

    return union1;
}

int main() {
    vector<int> a = {1, 2, 3, 4, 5};
    vector<int> b = {2, 3, 5, 6, 7};

    vector<int> res = findUnion(a, b);
    for (int num : res) {
        cout << num << " ";
    }

    return 0;
}
