#include<bits/stdc++.h>
using namespace std;

class Solution
{
    public:
    void Josephus(vector<int> person, int k, int index)
    {
        if(person.size() == 1)
        {
            cout<<person[0] << endl;
            return;
        }

        index = ((index + k) % person.size());
        person.erase(person.begin() + index);

        Josephus(person, k, index);
    }

};

int main()
{
    Solution res;
    int n;
    cin>>n;
    int k = 1,index=0;
    vector<int> person;
    //in our case we are returning the index of the surviving person for the staring position being 0th position
    for(int i = 0;i < n;i++)//otherwise start the for loop from 1 and codition is i<=n
    {
        person.push_back(i);
    }
    res.Josephus(person,k,index);
    return 0;
}
