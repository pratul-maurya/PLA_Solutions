#include <bits/stdc++.h> 
using namespace std;

bool perfectsquare(int n)
{
    int s;
    s=sqrt(n);
    return (s*s == n);

}

int main()
{
    int n;
    cin>>n;
    if(perfectsquare(5 * n * n + 4) || perfectsquare(5 * n * n - 4 ))
        cout<<"Yes";
    else
        cout<<"No";
    return 0;
}

//An essential property about Fibonacci numbers is that 
//a number N is Fibonacci if and only if either one of (5N^2 + 4) or (5N^2 – 4) is a perfect square.
