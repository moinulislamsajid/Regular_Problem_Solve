#include<bits/stdc++.h>
using namespace std;

void solve()
{
    string s;
    cin>>s;

    vector<int> v;

    for(char ch : s)
    {
        int val = ch-'0';
        if(val==0)
        {
            val=10;
        }

        v.push_back(val);
    }

    int res = abs(v[0]-1) + abs(v[1]-v[0]) + abs(v[2]-v[1]) + abs(v[3]-v[2]) + 4;

    cout<<res<<"\n";
}

int main()
{
    int t;
    cin>>t;

    while(t--)
    {
        solve();
    }
}
