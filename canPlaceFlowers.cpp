#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    bool canPlaceFlowers(vector<int>& flowerbed, int n) {
        int size = flowerbed.size();

        for (int i = 0; i < size; i++) {
            if (flowerbed[i] == 0) {
                bool leftEmpty = (i == 0 || flowerbed[i - 1] == 0);
                bool rightEmpty = (i == size - 1 || flowerbed[i + 1] == 0);

                if (leftEmpty && rightEmpty) {
                    flowerbed[i] = 1; 
                    n--; 

                    if (n == 0) return true; 
                }
            }
        }
        return n <= 0;
    }
};

int main() {
    Solution sol;
    vector<int> flowerbed1 = {1, 0, 0, 0, 1};
    cout << sol.canPlaceFlowers(flowerbed1, 1) << endl; 

    vector<int> flowerbed2 = {1, 0, 0, 0, 1};
    cout << sol.canPlaceFlowers(flowerbed2, 2) << endl; 

    return 0;
}
