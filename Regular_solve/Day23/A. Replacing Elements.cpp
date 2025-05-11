#include<bits/stdc++.h>
using namespace std;

void solve()
{
    int n,d;
    cin>>n>>d;

    vector<int> v(n);
    for(int i=0; i<n; i++)
    {
        cin>>v[i];
    }

    sort(v.begin(),v.end());

    if(v[n-1]<=d)
    {
        cout<<"YES\n";
        return;
    }

    int mn = v[0]+v[1];

    if(mn<=d)
    {
        cout<<"YES\n";
    }
    else
    {
        cout<<"NO\n";
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
