#include<bits/stdc++.h>
using namespace std;

class Solution
{
    public:
    long steps(long n)
    {
        if (n == 1 || n == 0)
        {
            return 1;
        }
        else
            return steps(n - 2) + steps(n - 1);
    }
};

int main()
{
    Solution res;
    long n;
    cin>>n;
    cout<<res.steps(n);
}
