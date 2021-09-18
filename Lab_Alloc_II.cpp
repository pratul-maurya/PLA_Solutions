#include <bits/stdc++.h> 
using namespace std;

int main()
{
    int x,y,z;
    string lab;
    cin>>x>>y>>z;
    cin>>lab;
    if(lab.compare("L1")==0)
    {
        if(z>y)
            lab="L2";
        else if(y>z)
            lab="L3";
    }
    
    else if(lab.compare("L2")==0)
    {
        if(z>x)
            lab="L1";
        else if(x>z)
            lab="L3";
    }
    
    else if(lab.compare("L3")==0)
    {
        if(y>x)
            lab="L1";
        else if(x>y)
            lab="L2";
    }
    cout<<lab;
}
