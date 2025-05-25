#include<bits/stdc++.h>
#define ll long long int
using namespace std;

void solve()
{
    string s;
    cin>>s;

    ll sz = s.size();

    ll last = s[sz-1] - 48;
    ll first = s[0] - 48;

    if(last%2==0)
    {
        cout<<0<<"\n";
        return;
    }

    if(first%2==0)
    {
        cout<<1<<"\n";
        return;
    }

    ll cnt=0;
    for(char ch : s)
    {
        ll nn = ch - 48;
        if(nn%2==1)
        {
            cnt++;
        }
    }

    if(cnt==sz)
    {
        cout<<-1<<"\n";
        return;
    }



    cout<<2<<"\n";
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
