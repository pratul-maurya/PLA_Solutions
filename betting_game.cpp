#include<bits/stdc++.h>
using namespace std;

class Solution
{
    public:
    int final_amount(string s)
    {
        int amt=10;
        int bet =1;
        for (int i = 0; i < s.length(); i++)
        {
            if(s[i]=='W')
                {
                    amt+=bet;
                    if(bet != 1)
                    {
                        bet/=2;
                    }
                    else 
                        bet=1;
                }
            else
            {
                amt-=bet;
                bet*=2;
            }
        }
        if (amt < 1)
            return -1;
        else
            return amt;
    }
};

int main()
{
    Solution res;
    string s;
    cin>>s;
    cout<<res.final_amount(s);
}
