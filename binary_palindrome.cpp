#include<bits/stdc++.h>
using namespace std;

class Solution
{
    public:
     bool isBitSet(unsigned int x, unsigned int k)
     {
         return ( x& (1 << (k-1))) ? true : fasle;
     }

     bool isPalindrome(unsigned int x)
     {
         int l = 1;
         int r = sizeof(unsigned int) * 8;

         while (l < r)
         {
            if(isBitSet(x, l) != isBitSet(x, r))
                return false;
         }
         
     }

};

int main()
{

}
