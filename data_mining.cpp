#include <bits/stdc++.h> 
using namespace std;

int reverse(int n) 
//reverse a number to find the odd and even spaces since now the last number is the first number which will be an odd position number
// hence c=1 and so on
{
    int rev=0;
    while(n!=0)
    {
        rev=(rev*10)+(n%10);
        n/=10;
    }
    return rev;
}

int main()
{
    int n,c=1, sumo=0, sume=0;
    cin>>n;
    int r= reverse(n);
    //cout<<endl<<r;

    while (r!=0)
    {
        if(c%2 == 0)
            sume += r%10;
        else
            sumo += r%10;
        
        r/=10;
        c++;
    }
    //cout<<endl<<sume<<endl<<sumo<<endl;
    if(sume==sumo)
        cout<<"yes";
    else
        cout<<"no";
    return 0;
}
