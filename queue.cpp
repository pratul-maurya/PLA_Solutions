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
        if(a[i] <= seats) //check if there enough seats for the i th group
        {
            seats -= a[i]; //subtract the remanining number of seats
            i++;
        }

        else
        {
            seats = m; //else the next bus has m seats remaining
            bus++; //increase total bus number
        }
    }
    cout<<endl<<bus;
}
