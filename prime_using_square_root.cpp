#include <bits/stdc++.h> 
using namespace std;

bool isPrime(long int n)
{
    if(n == 1)
        return false;
    
    for (int i = 2; i*i <= n; i++)
    {
        if(n % i == 0)
            return false;
    }
    return true;   
}

int main()
{
    long int n;
    cin>>n;
    if(isPrime(n))
        cout<<"The given number is a prime number";
    else
        cout<<"Given number is not a prime number";
}

//Prime number using square root
//Given a positive integer N, check if the number is a prime or not.  Constraint: 1 < N < 106  Example 1: Input: 11 Output: The given number is a prime number.  Example 2: Input: 15 Output: Given number is not a prime number
