#include<bits/stdc++.h>
using namespace std;

class Solution
{
    public:
     unsigned int setBits(unsigned int n)
     {
        unsigned int count=0;
         while(n)
         {
             count += n & 1;
             n >>= 1;
         }
         return count;
     }

     unsigned int LSBSetBitPos(int n)
     { 
        return log2(n & -n) + 1;
     }
};

int main()
{
    Solution res;
    int n;
    cin>>n;
    cout<<res.setBits(n)<<"#"<<res.LSBSetBitPos(n);
    string ans;
}
