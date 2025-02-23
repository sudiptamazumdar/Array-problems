
#include <bits/stdc++.h>
#include <vector>
using namespace std;

void binSort(vector<int> &arr) {
   
    sort(arr.begin(), arr.end());
    for (int i = 0; i < arr.size(); i++)
    {
        cout << arr[i] << " ";
    }
}

int main()
{
    int n;
    cin >> n;
    vector <int>v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    binSort(v);
    return 0;
}