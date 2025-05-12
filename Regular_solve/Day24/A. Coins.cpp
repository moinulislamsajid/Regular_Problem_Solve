#include<bits/stdc++.h>
#define ll long long int
using namespace std;

void solve()
{

        ll x,y;
        cin>>x>>y;

        if(y==1)
        {
            cout<<"YES\n";
            return;
        }
        if(x==y || (x==(y+2)))
        {
            cout<<"YES\n";
            return;
        }

        ll d= x-y;
        if(d==1 && x%2==0)
        {
            cout<<"YES\n";
            return;
        }
        if(d==1 && x%2==1)
        {
            cout<<"NO\n";
            return;
        }
        if(x<y && x%2==0)
        {
            cout<<"YES\n";
            return;
        }
        if(x<y && x%2==1)
        {
            cout<<"NO\n";
            return;
        }
        if(x%2==0 && y%2==1)
        {
            cout<<"YES\n";
            return;
        }
        if(x%2==1 && y%2==1)
        {
            cout<<"YES\n";
            return;
        }
        if(x%2==0 && y%2==0)
        {
            cout<<"YES\n";
            return;
        }

        ll sum = y+2;

        ll diff = x-sum;

        if(diff==1 && x%2==0)
        {
            cout<<"YES\n";
        }
        else
        {
            cout<<"NO\n";
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
