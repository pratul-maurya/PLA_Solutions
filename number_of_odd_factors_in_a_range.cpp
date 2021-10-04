#include <bits/stdc++.h> 
using namespace std;

int oddSquares(int a, int b) //only perfect-squares have odd factors
{
    a=sqrt(a-1);
    b=sqrt(b);
    return (b-a);
}

int main()
{
    int a,b;
    cin>>a>>b;
    cout<<oddSquares(a,b);
    return 0;
}
