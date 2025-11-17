#include<bits/stdc++.h>
using namespace std;


void solve()
{
    int n;
    cin>>n;

    vector<int>v(n);
    for(int i=0; i<n; i++)
    {
        cin>>v[i];
    }

    for(int i=1; i<n-1; i++)
    {
        if(v[i]>v[i-1] && v[i]>v[i+1])
        {
            cout<<"YES\n";
            cout<<i<<" "<<i+1<<" "<<i+1<<'\n';
            return;
        }
    }
    cout<<"NO\n";
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
