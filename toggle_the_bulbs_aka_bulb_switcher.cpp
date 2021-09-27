#include <bits/stdc++.h> 
using namespace std;

class Solution
{
    public:
    int bulb_switch(int n)
    {
        return sqrt(n);
    }
};

int main()
{
    int n;
    cin>>n;
    Solution a;
    cout<< (a.bulb_switch(n));
}
