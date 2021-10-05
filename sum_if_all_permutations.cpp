#include <bits/stdc++.h> 
using namespace std;

int factorial(int n) //funtion to calculate factorial
{
    int f = 1;
    if (n == 0 || n == 1)
        return 1;
    for (int i = 2; i <=n; i++)
    {
        f*=i;
    }
    return f;
    
}

int getSum(int arr[], int n) //sum of all numbers
{
    int fact=factorial(n); //factorial of n 
    int digitsum=0; //sum of all digits
    for (int i = 0; i < n; i++)
    {
        digitsum+=arr[i];
    }
    digitsum=digitsum * (fact/n);

    int result =0 ;
    for (int i = 0, k=1; i < n; i++)//sum of all numbers
    {
        result = result + (k*digitsum);
        k*=10;
    }
    return result;    
}

int main()
{
    int n, arr[10];
    cin>>n;
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    cout<<endl<<getSum(arr,n);
    return 0;
}

//LOGIC
//Total numbers that can be formed using n digits is total number of permutations of n digits, i.e factorial(n).
//Now, since the number formed is a n-digit number,each digit will appear factorial(n)/n times at each position from least significant digit to most significant digit.
//Therefore, sum of digits at a position = (sum of all the digits) * (factorial(n)/n). #include <bits/stdc++.h> 
using namespace std;

int factorial(int n) //funtion to calculate factorial
{
    int f = 1;
    if (n == 0 || n == 1)
        return 1;
    for (int i = 2; i <=n; i++)
    {
        f*=i;
    }
    return f;
    
}

int getSum(int arr[], int n) //sum of all numbers
{
    int fact=factorial(n); //factorial of n 
    int digitsum=0; //sum of all digits
    for (int i = 0; i < n; i++)
    {
        digitsum+=arr[i];
    }
    digitsum=digitsum * (fact/n);

    int result =0 ;
    for (int i = 0, k=1; i < n; i++)//sum of all numbers
    {
        result = result + (k*digitsum);
        k*=10;
    }
    return result;    
}

int main()
{
    int n, arr[10];
    cin>>n;
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    cout<<endl<<getSum(arr,n);
    return 0;
}

//LOGIC
//Total numbers that can be formed using n digits is total number of permutations of n digits, i.e factorial(n).
//Now, since the number formed is a n-digit number,each digit will appear factorial(n)/n times at each position from least significant digit to most significant digit.
//Therefore, sum of digits at a position = (sum of all the digits) * (factorial(n)/n). 
