#include<bits/stdc++.h>
using namespace std;

class Solution
{
    public:
    int difference(unsigned int a, unsigned int b)
    {
        int count=0;

        for (int i = 0; i < 32; i++)
        {
            if(((a >> i) & 1) != ((b >> i) & 1))
                count++;
        }
        return count;        
    }
};

int main()
{
    Solution res;
    int n, arr[105], sum=0;
    cin>>n;
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            sum+=res.difference(arr[i], arr[j]);
        }
    }
    cout<<sum;
    return 0;
}
