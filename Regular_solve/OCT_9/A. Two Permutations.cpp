#include<bits/stdc++.h>
using namespace std;

void solve()
{
    int n,a,b;
    cin>>n>>a>>b;

    if(n==a && n==b)
    {
        cout<<"YES\n";
        return;

    }
    if(n>1)
    {
        //int div = (n/2);

        if(((a+b<=n-2)) && n>3)
        {
             cout<<"YES\n";
        }
        else
        {
            cout<<"NO\n";
        }
    }
    else
    {
        if(n==1 && (a==1) && (b==1))
        {

            cout<<"YES\n";
        }
        else
        {
            cout<<"NO\n";
        }
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
