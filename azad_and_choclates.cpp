#include <bits/stdc++.h> 
using namespace std;

int main()
{
    int n, a[50], rem, rem7;
    cin>>n;
    for (int i = 0; i < n; i++)
    {
        cin>>a[i];
    }

    for (int j = 0; j < n; j++) //to check whether he bought the choclate from the shop or not
    {
        rem=100-a[j]; //remaining amount
        rem7=rem % 7;

        if((rem % 3 == 0) || (rem % 7 == 0)) //if rem amount is div by 3 or 7 he then bought it from shop
            cout<<1<<endl;
        else if(rem7 % 3 == 0) //if rem amount is div by 3 AND 7 he also then bought it from shop
            cout<<1<<endl;
        else
            cout<<0<<endl;
    }
    return 0;
}
