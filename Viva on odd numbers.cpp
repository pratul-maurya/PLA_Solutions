#include<stdio.h>
#include<iostream>
#include<conio.h>
#include<bits/stdc++.h>

using namespace std;

int main(){
    float marks=0.0;
    int num;
    
    for(int i=0;i<3;){
        cin>>num;
        if(num<0){
            marks=marks-1;
            break;
        }else if(num%2==0){
            marks=marks-0.5;
        }else{
            marks=marks+1;
            i++;
        }
    }
    
    cout<<marks<<endl;
    
    return 0;
}