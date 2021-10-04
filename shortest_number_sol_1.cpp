//loop method

#include <bits/stdc++.h> 
using namespace std;

int reverse(int n) 
//reverse a number to 
{
    int rev=0;
    while(n!=0)
    {
        rev=(rev*10)+(n % 10);
        n/=10;
    }
    return rev;
}

int main()
{
    int n,n1=0;
    int k;
    cin>>n>>k;
    n=reverse(n);
    for (int i = 0; i < k; i++)
    {
        n=n/10;
    }
    n=reverse(n);
    cout<<n;
}
