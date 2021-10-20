#include<bits/stdc++.h>
using namespace std;

class Solution
{
    public:
    long long ballRemoval(long long rem)
    {
        if(rem == 1 || rem == 2)
            return 1;
        else if(rem == 3)
            return 2;
        else
            return ( ballRemoval(rem-1) + ballRemoval(rem-3));
    }

};

int main()
{
    Solution res;
    long long n;
    cin>>n;
    long long MOD = 1000000007;
    cout<<res.ballRemoval(n) % MOD;
    return 0;
}
