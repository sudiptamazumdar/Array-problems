#include <iostream>
using namespace std;

int majorityWins(int arr[], int n, int x, int y) {
   
    int count_x = 0, count_y = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == x)
            count_x++;
        if (arr[i] == y)
            count_y++;
    }
    if (count_x > count_y)
        return x;
     if (count_y > count_x) 
        return y;
     
    return (x < y) ? x : y;
}

int main()
{
    int n, x, y;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    cin >> x;
    cin >> y;
    cout << majorityWins(arr, n, x, y);
    return 0;
}