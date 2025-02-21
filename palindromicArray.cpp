/*Given an array arr[] of positive integers. Return true if all the array elements are palindrome otherwise, return false.

Examples:

Input: arr[] = [111, 222, 333, 444, 555]
Output: true*/

#include <iostream>
#include <vector>

using namespace std;
bool palindrome(int n)
{
    int temp = n;
    int rev = 0;
    while(n != 0)
    {
        int digit = n % 10;
        rev = rev * 10 + digit;
        n = n / 10;
    }
    return rev == temp;
}
bool isPalinArray(vector<int> &arr) {
    int count = 0;
    for (int i = 0; i < arr.size(); i++)
    {
        if(!palindrome(arr[i]))
            return false;
    }
    return true;
                
}

int main()
{
    int n;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    cout << isPalinArray(v);
    return 0;

}
        