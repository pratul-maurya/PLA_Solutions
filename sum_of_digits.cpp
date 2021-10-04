#include <bits/stdc++.h> 
using namespace std;

int sum(int n)
{
    if(n==0)
        return 0;
    else if(n % 9 == 0)
        return 9;
    else
        return (n % 9);
}

int main()
{
    int n;
    cin>>n;
    cout<<sum(n);
    return 0;
}

//If a number n is divisible by 9, then the sum of its digit until sum becomes single digit is always 9. For example, 
//Let, n = 2880 
//Sum of digits = 2 + 8 + 8 = 18: 18 = 1 + 8 = 9
//A number can be of the form 9x or 9x + k. For the first case, answer is always 9. For the second case, and is always k.
