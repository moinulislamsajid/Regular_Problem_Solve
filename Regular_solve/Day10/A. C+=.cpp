#include<bits/stdc++.h>
using namespace std;

void solve()
{
    int a,b,n;
    cin>>a>>b>>n;

    int cnt=0,x=0,y=0;

    while(true)
    {
        cnt++;
        int mn = min(a,b);
        x=mn;
        int mx=  max(a,b);
        y=mx;

        mn+=mx;

        if(mn>n)
        {
            break;
        }
        if(x==a)
        {
            a=mn;
        }
        else
        {
            b=mn;
        }
    }

    cout<<cnt<<endl;
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
