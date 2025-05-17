#include<bits/stdc++.h>
#define ll long long int
using namespace std;

void solve()
{
    ll n;
    cin>>n;

    if(n==1)
    {
        cout<<2<<"\n";
        return;
    }

    if(n==4)
    {
        cout<<2<<"\n";
        return;
    }

    if(n==2)
    {
        cout<<1<<"\n";
        return;
    }

    if(n%3==0)
    {
        cout<<(n/3)<<"\n";
        return;
    }

    double num = (n/3.0);
    cout<<(ll) ceil(num)<<"\n";
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
