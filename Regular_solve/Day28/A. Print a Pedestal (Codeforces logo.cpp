#include<bits/stdc++.h>
#define ll long long int
using namespace std;

void solve()
{
    ll n;
    cin>>n;
    if(n==7)
    {
        cout<<2<<" "<<4<<" "<<1<<"\n";
        return;
    }

    double num = (n/3.0);
    ll num1 = ceil(num);
    ll b = num1+1;
    ll c = (n) - (num1+b);
    cout<<num1<<" "<<b<<" "<<c<<"\n";
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
