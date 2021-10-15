#include <bits/stdc++.h> 
using namespace std;

class Solution
{
    public:
    long long apple_cal(long long i)
    {
        //calculated formula of number of apples at (i,j) (j is irrelevant as i=j in square)
        return (4*(pow(i,3)) + 6*pow(i,2) + 2*i);
    }
    long long minimumPerimeter(long long applesNeeded)
    {
        long long apples = 0;
        for (long long i = 1; ; i++)
        {
            apples = apple_cal(i);
            //if apples at i is greater than or equal to needed apples
            if(apples >= applesNeeded)
                return (8*i);
        }
        return (-1);  
    }
};

int main()
{
    Solution res;
    long long n;
    cin>>n;
    cout<<res.minimumPerimeter(n);
}
