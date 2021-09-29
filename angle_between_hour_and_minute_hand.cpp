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

/*
Angle between hour and minute hand
Let us consider the normal wall clock we use. Write a program to calculate the smallest angle between the hour 'H' and the minute 'M' hand of a clock, for the given time.
Set the precision to two decimal points. Print "Invalid Input" if the time is invalid.

Constraints:
0 < H <= 12
0 <= M < 60

Example:
Input:
3 30
Output:
75.00
	 Case 1
	 Case 2

Input (stdin)
3 30
Output (stdout)
75.00

*/
