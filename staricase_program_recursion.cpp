#include<bits/stdc++.h>
using namespace std;

//Time Complexity: O(3n)
class Solution
{
    public:
    long steps(int n)
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
    int n;
    cin>>n;
    cout<<res.steps(n);
}
