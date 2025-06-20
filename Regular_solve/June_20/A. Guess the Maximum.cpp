#include<bits/stdc++.h>
#define ll long long int
using namespace std;

void solve()
{
    ll n;
    cin>>n;

    vector<ll> v(n);

    for(int i=0; i<n; i++)
    {
        cin>>v[i];
    }

    vector<ll> holdMax;

    for(int i=1; i<n; i++)
    {
        ll maxCheck = max(v[i],v[i-1]);
        holdMax.push_back(maxCheck);
    }


    ll minVal = *min_element(holdMax.begin(),holdMax.end());
    cout<<minVal-1<<'\n';
}

int main()
{
    ll t;
    cin>>t;

    while(t--)
    {
        solve();
    }
}
