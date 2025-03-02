#include <iostream>
using namespace std;

int convertFive(int n) {
    
     if (n == 0) return 5;

int result = 0, place = 1;

while (n != 0) {
    int digit = n % 10;
    
    // Replace 0 with 5
    if (digit == 0) 
        digit = 5;
    
    result = digit * place + result;
    place *= 10;
    n /= 10;
}

return result;
}
int main()
{
    int n;
    cin >> n;
    cout << convertFive(n);
    return 0;
}