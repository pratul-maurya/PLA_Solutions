#include <bits/stdc++.h> 
using namespace std;

int arrSum(int arr[], int n)
{
    if(n <= 0)
        return 0;
    return(arrSum(arr,n-1) + arr[n-1]);
}

int main()
{
    int arr[100], n;
    cin>>n;
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    cout<<"The sum of the lements of the array is "<<arrSum(arr,n);
    return 0;    
}
