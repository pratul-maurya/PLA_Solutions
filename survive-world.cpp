#include<bits/stdc++.h>
using namespace std;

class Solution
{
    public:
    int survive(int n, int k)
    {
        if(n == 1)
            return 1;
        else 
            return ((survive( n - 1,k) + (k - 1)) % n + 1);
    }
};

int main()
{
    Solution res;
    int n,k = 2;
    cin>>n;
    //in our case we are returning the index of the surviving person for the staring position being 0th position
    cout<<res.survive(n-1,k);
}
