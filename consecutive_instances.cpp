#include<bits/stdc++.h>
using namespace std;

class Solution
{
    public:
    int oddSearch(int *arr, int low, int high)
    {
        if(low > high)
            return -1;
        else if(low == high)
            return (arr[high]);
        
        int mid = (low + high) / 2;

        if(mid % 2 == 0)
        {
            if(arr[mid] ==  arr[mid + 1])
                oddSearch(arr, mid+2, high);
            else
                oddSearch(arr, low, mid);
        }
        else
        {
            if(arr[mid - 1] == arr[mid])
                oddSearch(arr,mid+1, high);
            else
                oddSearch(arr, low, mid-1);
        }
    }
};

int main ()
{
    Solution res;
    int arr[100], n;
    cin>>n;
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    cout<<res.oddSearch(arr, 0, n);
}
