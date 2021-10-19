#include<bits/stdc++.h>
using namespace std;

class Solution
{
    public:
     bool isPalindrome(unsigned int x)
     {
         unsigned rev = 0;
         unsigned k = x;
         
         while (k)
         {
             rev = (rev << 1) | (k & 1);
             k >>= 1;
         }
         
         return (x==rev);         
     }

};

int main()
{
    Solution res;
    int x;
    cin>>x;
    
    if(res.isPalindrome(x))
        cout<<"yes";
    else
        cout<<"no";
}
