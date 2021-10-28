#include<bits/stdc++.h>
using namespace std;
//Time Complexity: O(n)
class Solution
{
    public:
    int steps(int n)
    {
        int res[n + 1];
        res[0] = 1;
        res[1] = 1;
        for (int i = 2; i <= n; i++)
        {
            res[i]=res[i - 1] + res[i - 2];
        }
        return res[n];
    }
};

int main()
{
    Solution res;
    int n;
    n=4;
    cout<<res.steps(n);
}
