#include<bits/stdc++.h>
#define ll long long int
using namespace std;

void solve()
{
    int n;
    cin>>n;

    vector<ll> v(n);
    for(int i=0; i<n; i++)
    {
        cin>>v[i];
    }

    vector<ll> d;
    ll pos=0;

    if(is_sorted(v.begin(),v.end()))
    {
        cout<<v.size()<<endl;
        for(ll in : v)
        {
            cout<<in<<" ";
        }
        cout<<endl;
    }
    else
    {
        for(int i=1; i<n; i++)
        {
            if(v[i]>=v[i-1])
            {
                d.push_back(v[i]);
            }
            else
            {
                pos=i;
                d.push_back(1);
                d.push_back(v[i]);

            }
        }

        cout<<d.size()+1<<endl;
        cout<<v[0]<<" ";
        for(ll in : d)
        {
            cout<<in<<" ";
        }
        cout<<endl;
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
