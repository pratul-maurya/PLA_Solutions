#include <bits/stdc++.h> 
using namespace std;

int main()
{
    int n, arr [50];
    cin>>n;
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }

    for (int i = 0; i < n; i++)
    {
        int count = 1;
        if(i>0)
        {
            for (int j = 1; j <= i; j++)
            {
                if(arr[i]>arr[i-j])
                {
                    count++;
                }
            }
            
        }
        cout<<count<<endl;
    }
    return 0;
}
