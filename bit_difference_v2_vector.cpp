#include<bits/stdc++.h>
using namespace std;

class Solution
{
    public:
    int difference(vector<int> a)
    {
        int n = a.size(), result=0;
        int m=1000000007; // 10^9+7 = 1000000007
        for (int i = 0; i < n-1; i++)
        {
            int count=0;
            for (int j = i; j < n; j++)
            {
                int m = a[i] & a[j]; //bitwise AND pair of a[i] , a[j]
                int n = a[i] | a[j]; //bitwise OR pair of a[i] , a[j]

                bitset<32> b1(m); // // b1 is initialized with bits of m
                bitset<32> b2(n); // // b2 is initialized with bits of n
                
                int st1 = b1.count(); //count set bits (1) in b1: AND of 2 no.s
                int st2 = b2.count(); //count set bits (1) in b2: OR of 2 no.s

                count = abs(st1 - st2);
                
                result = result + (2 * count);
            }
        }
        return result;        
    }
};

int main()
{
    Solution res;
    int n,input;
    cin>>n;
    vector<int> v;
    for (int i = 0; i < n; i++)
    {
        cin>>input;
        v.push_back(input);
    }
    int result; 
    result = res.difference(v);
    cout<<result;
    return 0;
}
