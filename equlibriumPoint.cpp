#include <iostream>
#include <vector>
using namespace std;
class Solution{
    public:
    int findEquilibrium(vector<int> &arr){
        int ls = 0;
        int rs = 0;
        int as = 0;
        
        for(int i = 0 ; i < arr.size() ; i++){
            as +=arr[i];
           
        }
        
        for(int i = 0 ; i < arr.size() ; i++){
            rs = as - ls - arr[i];
           
            if(ls == rs){
                return i;
                
            }
            ls += arr[i];
           
        }
        return -1;
        
    }
};

int main()
{
    Solution s;
   vector <int> v;
   v.push_back(2);
   v.push_back(1);
   v.push_back(0);
   v.push_back(3);
    cout << s.findEquilibrium(v);
}