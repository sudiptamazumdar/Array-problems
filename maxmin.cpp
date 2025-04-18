#include <iostream>
#include <vector>
#include <climits>
using namespace std;

int sumOfMinAndMax(vector<int>& A, int N) {
    int mini = INT_MAX;
    int maxi = INT_MIN;

    for (int i = 0; i < N; i++) {
        if (A[i] < mini) mini = A[i];
        if (A[i] > maxi) maxi = A[i];
    }

    return mini + maxi;
}

int main() {
    int N;
    cout << "Enter number of elements: ";
    cin >> N;

    vector<int> A(N);
    cout << "Enter elements: ";
    for (int i = 0; i < N; i++) {
        cin >> A[i];
    }

    cout << "Sum of min and max: " << sumOfMinAndMax(A, N) << endl;

    return 0;
}
