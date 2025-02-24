#include <iostream>
#include <vector>
using namespace std;

int countSmaller(int x, vector<int> &arr)
{
    int count = 0;
    for (int i = 0; i < arr.size(); i++)
    {
        if (arr[i] <= x)
            count++;

    }
    return count;
}

int main()
{
    int n;
    cin >> n;
    vector <int> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    int x;
    cin >> x;
    cout << countSmaller(x, v);
    return 0;
}