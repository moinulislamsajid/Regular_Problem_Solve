#include<bits/stdc++.h>
#define ll long long int
using namespace std;

void solve()
{
    ll n;
    cin>>n;

    set<ll> st;

    for(int i=1; i*i<=n; i++)
    {
        st.insert(i*i);
    }
    for(int i=1; i*i*i<=n; i++)
    {
        st.insert(i*i*i);
    }

    cout<<st.size()<<'\n';
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
