#include <bits/stdc++.h> 
using namespace std;

int gcd( int a, int b) //function to check whether given numbers are co-primes using euclid algo
{
    if (a==0)
        return b;
    
    return gcd(b % a, a);
}

int findSum(unsigned int N)
{
    unsigned int sum = 0;
    for (int i = 1;i < N; i++)
    {
        if (gcd(i, N) == 1)
        {
            sum+=i;
        }
    }
    return sum;
}

int main()
{
    int n;
    cin>>n;
    cout<<findSum(n);
    return 0;
}
