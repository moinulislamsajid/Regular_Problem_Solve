#include<bits/stdc++.h>
#define ll long long int
using namespace std;

void solve()
{
    ll n;
    cin>>n;

    vector<ll> v(n);
    vector<ll> v1(n);

    for(ll i=0; i<n; i++)
    {
        cin>>v[i];
        v1[i]=v[i];
    }

    sort(v.begin(),v.end());

    bool check=true;

    for(int i=0; i<n; i++)
    {
        if(v[i]%2==0)
        {
            if(v1[i]%2==0)
            {
                continue;
            }
            else
            {
                check=false;
                break;
            }
        }
        if(v[i]%2==1)
        {
            if(v1[i]%2==1)
            {
                continue;
            }
            else
            {
                check=false;
                break;
            }
        }

    }


    if(check)
    {
        cout<<"YES"<<endl;
    }
    else
    {
        cout<<"NO"<<endl;
    }


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
