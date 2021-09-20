#include <bits/stdc++.h> 
using namespace std;

int main()
{
    int a,b,c, gcd, big;
    cin>>a>>b>>c;

    big=max(a,b);
    big=max(big,c);
    for(gcd=big;gcd>=1;gcd--)
    {
        if(a%gcd==0 && b%gcd==0 && c%gcd==0)
        break;
    }

    cout<<"The treasure is in the box which has number ";
    if(big == a)
    {
        if(b>c)
        cout<<b;

        else if(c>b)
        cout<<c;
    }

    else if(big == b)
    {
        if(a>c)
        cout<<a;

        else if(c>a)
        cout<<c;
    }

    else
    {
        if(a>b)
        cout<<a;

        else if(b>a)
        cout<<b;
    }
    cout<<endl<<"The code to open the box is "<<gcd;
    return 0;
}
