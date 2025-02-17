/*Given an array arr, rotate the array by one position in clockwise direction.

Examples:

Input: arr[] = [1, 2, 3, 4, 5]
Output: [5, 1, 2, 3, 4]
Explanation: If we rotate arr by one position in clockwise 5 come to the front and remaining those are shifted to the end.*/

#include <iostream>
#include <vector>

using namespace std;

void rotateByOne(vector<int>& arr) {
    int n = arr.size();
    if (n == 0) return; 

    int last = arr[n - 1]; 

   
    for (int i = n - 1; i > 0; i--) {
        arr[i] = arr[i - 1];
    }

    arr[0] = last; 
}

int main() {
    int n;
    cin >> n;
    vector<int> arr(n) ;
    for (int i = 0; i < arr.size(); i++)
    {
        cin >> arr[i];
    }

    rotateByOne(arr); // Rotate the array by one position

    
    for (int num : arr) {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}
