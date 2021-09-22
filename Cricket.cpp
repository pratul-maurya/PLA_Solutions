#include <bits/stdc++.h> 
using namespace std;

int main()
{
    int t_balls, cballs, truns, cruns;
    float r_runrate, c_runrate, t_overs, c_overs;
    cin>>t_balls>>truns>>cruns>>cballs;
    
    int c_o;
    float remanining_balls;
    c_o=cballs/6;
    remanining_balls=cballs%6;
    remanining_balls=remanining_balls/10;

    c_overs=c_o + remanining_balls;
    t_overs=t_balls/6;
    c_runrate=cruns/c_overs;
    r_runrate=truns/t_overs;
    
    cout<<endl<<t_overs<<" "<<c_overs<<" "<<c_runrate<<" "<<r_runrate<<endl;
    if(r_runrate<c_runrate)
    {
        cout<<"Eligible to Win";
    }
    else
        cout<<"Not eligible to win";
    
    return 0;
}
