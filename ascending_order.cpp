#include <bits/stdc++.h> 
using namespace std;

#define MAX 100

int main()
{
    int arr[MAX];
    int n, temp;
    cin>>n;
    for(int i=0;i<n;i++)
        cin>>arr[i];
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(arr[i]<arr[j])
            { 
                temp=arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
            }
        }
    }
    cout<<"Sorted array is:\n";
    for(int i=0;i<n;i++)
        cout<<arr[i]<<endl;
    return 0;
}
