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
    for(int i = 1;i <= n;i++)
    {
        person.push_back(i);
    }
    res.Josephus(person,k,index);
    return 0;
}
