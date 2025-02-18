/*Given two arrays a[] and b[], your task is to determine whether b[] is a subset of a[].

Examples:

Input: a[] = [11, 7, 1, 13, 21, 3, 7, 3], b[] = [11, 3, 7, 1, 7]
Output: true
Explanation: b[] is a subset of a[]*/

#include <iostream>
#include <unordered_map>
#include <vector>

using namespace std;

bool isSubset(vector<int>& a, vector<int>& b) {
    unordered_map<int, int> freq;

    for (int num : a) {
        freq[num]++;
    }

    
    for (int num : b) {
        if (freq[num] > 0) {
            freq[num]--; 
        } else {
            return false;
        }
    }
    return true;
}

int main() {
   
    int n;
    cin >> n;
    vector<int> a(n) ;
    for (int i = 0; i < a.size(); i++)
    {
        cin >> a[i];
    }
    int m;
    cin >> m;
    vector<int> b(m) ;
    for (int i = 0; i < b.size(); i++)
    {
        cin >> b[i];
    }

    if (isSubset(a, b)) {
        cout << "true" << endl;
    } else {
        cout << "false" << endl;
    }

    return 0;
}
