#include<bits/stdc++.h>
#define ll long long int
using namespace std;

void solve()
{
    ll n,a,b,c;
    cin>>n>>a>>b>>c;

    ll sum= (a+b+c);
    ll days = (n/sum)*3;

    if(n%sum==0)
    {
        cout<<days<<"\n";
    }
    else if(n%sum<=a)
    {
        cout<<days+1<<"\n";
    }
    else if(n%sum<=(a+b))
    {
        cout<<days+2<<"\n";
    }
    else
    {
        cout<<days+3<<"\n";
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
