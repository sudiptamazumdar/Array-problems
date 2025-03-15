#include <iostream>
#include <vector>

using namespace std;

int findSecondLargest(vector<int>& arr) {
    int largest = INT_MIN, secondLargest = INT_MIN;
    
    for (int num : arr) {
        if (num > largest) {
            secondLargest = largest; // Update second largest before changing largest
            largest = num;
        } else if (num > secondLargest && num < largest) {
            secondLargest = num; // Update second largest if it's smaller than largest
        }
    }
    
    return (secondLargest == INT_MIN) ? -1 : secondLargest;
}

int main() {
    vector<int> arr = {12, 35, 1, 10, 34, 1}; // Example input
    int result = findSecondLargest(arr);

    cout << "Second Largest Element: " << result << endl;
    return 0;
}
