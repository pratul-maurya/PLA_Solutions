#include<iostream>
#include<stdio.h>
#include<bits/stdc++.h>
using namespace std;
int main()
{
	int k,n,x,y,a,d,p,b,e;
	cin>>"Enter a number for checking: ">>k;
	n=0;
	p=pow(k,2);
	e=k;
	int c;
	c=p;
	y=1;
	while(e!=0)
	{
		e=e/10;
		n++;
	}
	int count;
	count=0;
	while(c!=0)
	{c=c/10;
	count++;
	}
	for(int i=0;i<n;i++)
	{
		y=y*10;
		
	}
	a=p/y;
	b=p%y;
	d=a+b;
	if(k==d)
	cout<<"true";
	else
	cout<<"false";
	
	return 0;
}