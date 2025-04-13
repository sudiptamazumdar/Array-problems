#include <iostream>
using namespace std;

bool isPowerOfTwo(int n) {
    if (n <= 0) return false;
    return (n & (n - 1)) == 0;
}

int main() {
    int n;
    cout << "Enter a number: ";
    cin >> n;

    if (isPowerOfTwo(n)) {
        cout << n << " is a power of 2." << endl;
    } else {
        cout << n << " is NOT a power of 2." << endl;
    }

    return 0;
}
