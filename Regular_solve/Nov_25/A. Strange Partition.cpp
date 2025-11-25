#include<bits/stdc++.h>
#define ll long long int
using namespace std;

void solve()
{
    ll n,x;
    cin>>n>>x;
    ll sum=0;

    vector<ll> v(n);

    for(ll i=0; i<n; i++)
    {
        cin>>v[i];
        sum+=v[i];
    }

    ll mn = (sum+x-1)/x;

    int mx = *max_element(v.begin(),v.end());
    ll sum1=0;
    if(x>=mx)
    {
        sum1=n;
    }
    else
    {
        for(int i=0; i<n; i++)
        {
            ll sms = (v[i]+x-1)/x;
            sum1+=sms;
        }
    }

    cout<<mn<<" "<<sum1<<'\n';
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
