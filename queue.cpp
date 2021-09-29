#include <bits/stdc++.h> 
using namespace std;

int main()
{
    int n, m, a[100];
    cin>>n>>m;
    for(int i=0;i < n;i++)
        cin>>a[i];
    
    int seats=m;
    int bus=1;
    for(int i= 0;i<n;)
    {
        if(a[i] <= seats)
        {
            seats -= a[i];
            i++;
        }

        else
        {
            seats = m;
            bus++;
        }
    }
    cout<<endl<<bus;
}
