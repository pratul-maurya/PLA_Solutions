//counting number of palindromes with n digits
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

bool isPalindrome(int n)
{
    return (n == reverse(n));
}

int countPalindrome(int n)
{
    int smallest=pow(10,n-1);
    int largest=pow(10,n) - 1;
    int count=0;

    for (int i = smallest; i <= largest; i++)
    {
        if(isPalindrome(i))
            count++;

    }

    return count;    
}

int main()
{
    int n;
    cin>>n;

    cout<<countPalindrome(n);
}
