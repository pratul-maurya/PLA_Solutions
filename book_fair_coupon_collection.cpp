#include<bits/stdc++.h>
using namespace std;

int sum(int arr[], int n, int k, int s)
{
    int sum=0;
    k++;
    for (int i = s; i < n; i+=k)
    {
        sum+=arr[i];
    }
    return(sum);
}

int main()
{
    int n,m, coup[50],temp,check=0;
    cin>>n>>m;
    for (int i = 0; i < n; i++)
    {
        cin>>coup[i];
    }
    
    for (int j = 0; j < n; j++)
    {
        temp=sum(coup,n,m,j);
        if(temp>check)
            check=temp;
    }
    
    cout<<endl<<check;
