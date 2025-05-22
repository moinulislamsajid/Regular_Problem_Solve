#include<bits/stdc++.h>
#define ll long long int
using namespace std;

void solve()
{
    ll n;
    cin>>n;

    vector<ll> v(n);
    ll sum=0;
    for(ll i=0; i<n; i++)
    {
        cin>>v[i];
        sum+=v[i];
    }

    ll div = sum/n;
    ll diff[n];

    for(int i=0; i<n; i++)
    {
        ll dif = v[i]-div;
        diff[i]=dif;
    }


    /*for(ll in : diff)
    {
        cout<<in<<" ";
    }

    cout<<endl;*/
    ll  cumSum[n];

    cumSum[0] = diff[0];

    for(int i=1; i<n; i++)
    {

        ll ss = diff[i]+cumSum[i-1];
        cumSum[i]=ss;
    }

    bool ok=false;
    for(ll i=0; i<n; i++)
    {
        if(cumSum[i]<0)
        {
            ok=true;
            break;
        }
    }

    if(ok)
    {
        cout<<"NO\n";
    }
    else
    {
        cout<<"YES\n";
    }

    cout<<ceil(-3.22)<<endl;
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
