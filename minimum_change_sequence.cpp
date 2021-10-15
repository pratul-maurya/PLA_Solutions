#include<bits/stdc++.h>
using namespace std;

class Solution
{
    public:
    int graycode(int n)
    {
        
        if(n <= 0)
        {
            return 0;
        }
        vector<string> gray; //to store gray codes
        // one-bit patter i.e. 0 1
        gray.push_back("0");
        gray.push_back("1");

        //code to reverse the existing graycode list then concatenate it with the orignal
        //then prefix the first half with 0 and the second half with 1
        // this loop will generate 2*i gray codes in every iteration
        //elements in gray code of 'n' bits= 2^n
        for (int i = 2; i < (1 << n); i = i<<1)
        {
            for (int j = i-1; j >= 0; j--) //concatenate the already generated gray code in reverse order with itself (L1+L2) to get 2*i elements
            {
                gray.push_back(gray[j]);
            }

            for (int j = 0; j < i; j++) //prefixing '0' in the first half
            {
                gray[j] = "0" + gray[j];
            }
            
            for (int j = i; j < 2*i; j++) //prefixing '1' in the second half
            {
                gray[j] = "1" + gray[j];                
            }
        }
       
        for (int i = 0; i < gray.size(); i++)
        {
            cout<<gray[i]<<" ";
        }
    }
};

int main()
{
    Solution res;
    int n;
    cin>>n;
    res.graycode(n);
}
