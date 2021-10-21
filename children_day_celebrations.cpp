#include<bits/stdc++.h>
using namespace std;

class Solution
{
    public:
    int exchange(long long n)
    {
        if (n == 0)
            return 1;
        else if (n == 1)
            return 0;
        else if (n == 2)
            return 1;
        
        else
            return (n - 1) * (exchange(n - 1) + exchange(n - 2 ));
    }
};

int main()
{
    Solution res;
    long long n;
    cin>>n;
    cout<<res.exchange(n);
}
