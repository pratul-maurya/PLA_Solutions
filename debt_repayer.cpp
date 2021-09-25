#include <bits/stdc++.h> 
using namespace std;

int main()
{
    float prin, roi, years, intrest, amount, discount, final;
    cin>>prin>>roi>>years;
    intrest=(prin*roi*years)/100; //to calculate the intrest
    amount=prin+intrest;           //to calculate the amount adding the intrest to the principal amount
    discount=intrest*.02;           //calculating the 2% discount on the intrest
    final=amount-discount;          //cqalculating the final value subtracting the discount from the amount calculated
    cout<<endl<<intrest<<endl<<amount<<endl<<discount<<endl<<final;
}
