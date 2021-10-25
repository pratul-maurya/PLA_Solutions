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
