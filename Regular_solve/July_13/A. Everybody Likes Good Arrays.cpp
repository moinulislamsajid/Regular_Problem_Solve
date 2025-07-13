#include<bits/stdc++.h>
#define ll long long int
using namespace std;


void solve()
{
    ll n;
    cin>>n;

    vector<ll> v(n);
    for(ll i=0; i<n; i++)
    {
        cin>>v[i];
    }

    ll cnt=0;

    for(int i=1; i<n; i++)
    {
        if(v[i]%2==1)
        {
            if(v[i-1]%2==1)
            {
                cnt++;
            }
        }
        if(v[i]%2==0)
        {
            if(v[i-1]%2==0)
            {
                cnt++;
            }
        }
    }


    cout<<cnt<<endl;
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
