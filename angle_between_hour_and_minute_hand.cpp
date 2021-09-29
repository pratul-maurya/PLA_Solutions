#include <bits/stdc++.h> 
using namespace std;

int main()
{
    float hr, min;
    cin>>hr>>min;
    float hr_angle, min_angle, final_angle;

    hr_angle= (hr*30.00) + ((min/60)*30.00);
    min_angle=min*6.00;

    final_angle = hr_angle - min_angle;
    cout << abs(final_angle);

    return 0;
}
