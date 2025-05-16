#include<bits/stdc++.h>
#define ll long long int
using namespace std;

void solve()
{
    ll a,b,c,x,y;
    cin>>a>>b>>c>>x>>y;

    if(a>=x && b>=y)
    {
        cout<<"YES\n";
        return;
    }


    if(a>=x && (b+c)>=y)
    {
        cout<<"YES\n";
        return;
    }
    if(b>=y && (a+c)>=x)
    {
        cout<<"YES\n";
        return;
    }

    ll num1 = max(0LL,x-a);
    ll num2 = max(0LL,y-b);

    if((num1+num2)<=c)
    {
        cout<<"YES\n";
        return;
    }

    cout<<"NO\n";


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
