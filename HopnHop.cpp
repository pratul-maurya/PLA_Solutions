#include<bits/stdc++.h>
using namespace std;
int main(){
    
int x1,y1,x2,y2;

x1=3;
y1=4;
cin>>x2>>y2;
double x3= pow((x2-x1),2);
double y3= pow((y2-y1),2);
double hop = x3+y3;

hop=sqrt(hop);
hop=lround(hop);
cout<<hop;
return 0;
}