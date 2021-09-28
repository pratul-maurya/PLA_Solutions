#include<stdio.h>
#include<iostream>
#include<conio.h>
#include<bits/stdc++.h>

using namespace std;

int main(){
    double m, y, r;

    cout<<"Amount borrowed by Alice: ";
    cin>>m;

    cout<<"Rate of interest: ";
    cin>>r;

    cout<<"Number of years: ";
    cin>>y;

    double interest = m/y;
    cout<<"Interest is: "<<interest<<endl;

    double amount = m + interest;
    cout<<"Amount to be paid: "<<amount<<endl;

    double discount = (interest*2)/100;
    cout<<"Dicount given: "<<discount<<endl;

    double final = amount - discount;
    cout<<"Final payment: "<<final<<endl;
    return 0;
}