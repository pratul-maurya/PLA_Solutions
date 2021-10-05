#include <stdio.h>
#include<bits/stdc++.h>
#include<iostream>
using namespace std;
int main(){
    int t,x,y;
    cin>>t>>x>>y;

    int ben = t*x/100;
    cout<<ben<<endl;

    int blackbeard = (t-ben)*y/100;
    cout<<blackbeard<<endl;

    int share = (t-ben-blackbeard)/3;
    cout<<share<<endl;
    return 0;
}