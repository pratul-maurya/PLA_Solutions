#include<stdio.h>
#include<iostream>
#include<conio.h>
#include<bits/stdc++.h>

using namespace std;

int main(){
    int a,r,e=0,o=0,C=1;

    cout<<"Enter a number: ";
    cin>>a;

    while(a>0){
        r = a%10;
        if(C%2==0){
            e = e + r;
        }else if (C%2==1){
            o = o + r;
        }
        a = a/10;
C++;
    }

    if(e == o){
        cout<<"Entered Number is Probable Topper Number";
    }else{
        cout<<"Not a Probable Topper Number";
    }
   
    return 0;
}