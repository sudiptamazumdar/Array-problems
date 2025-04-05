#include <iostream>
#include <unordered_set>
#include <vector>
using namespace std;

int doUnion(vector<int>& a, vector<int>& b) {
    unordered_set<int> s;

    for (int i = 0; i < a.size(); i++)
        s.insert(a[i]);

  
    for (int i = 0; i < b.size(); i++)
        s.insert(b[i]);

   
    return s.size();
}

int main() {
    vector<int> a = {85, 25, 1, 32, 54, 6};
    vector<int> b = {85, 2};

    cout << "Union count: " << doUnion(a, b) << endl;
    return 0;
}
