#include<bits/stdc++.h>
using namespace std;

class Solution
{
    public:
    unsigned int reverse_bits (unsigned int a)
    {
        unsigned int rev=0, temp;
        while(a > 0)
        {
            rev<<=1;

            if(a & 1) //if bit is 1 then rev will have 1 else rev will have the 0 bit frm left shift
                rev ^=1; 
            a >>= 1;
        }
        return rev;
    }
};

int main ()
{
    Solution res;
    int n;
    cin>>n;
    cout<<res.reverse_bits(n);
}
