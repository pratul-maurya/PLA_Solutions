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
};

int main()
{
    Solution res;
    int n;
    cin>>n;
    cout<<res.setBits(n);
    
    string ans;
    
}
