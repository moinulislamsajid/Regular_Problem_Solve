#include<bits/stdc++.h>
#define ll long long int
using namespace std;

void solve()
{
    ll n,m,x;
    cin>>n>>m>>x;

    ll col = (x-1)/n+1;
    ll row = (x-1)%n+1;

    ll act = (row-1)*m+col;

    cout<<act<<"\n";
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
