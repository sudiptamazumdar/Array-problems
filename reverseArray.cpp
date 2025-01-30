#include <iostream>
using namespace std;

class Solution{
public:
    void reverse(int arr[], int n){
       for (int i = n - 1; i >= 0; i--)
       {
            cout << arr[i] << " ";
       } 
    }
};

int main()
{
    Solution s;
    int arr[5] = {1,2,3,4,5};
    s.reverse(arr,5);
}