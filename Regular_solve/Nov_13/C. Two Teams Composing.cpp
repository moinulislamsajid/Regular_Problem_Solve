#include<bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin>>n;

    vector<int> v(n);
    for(int i=0; i<n; i++)
    {
        cin>>v[i];
    }
    unordered_map<int,int> ump;

    for(int in : v)
    {
        ump[in]++;
    }

    int mxfreq=0;
    for(auto& it : ump)
    {
        mxfreq = max(mxfreq,it.second);
    }

    int mn = ump.size();

    if(mxfreq==mn)
    {
        cout<<mn-1<<'\n';
    }
    else
    {
        cout<<min(mn,mxfreq)<<'\n';
    }
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
