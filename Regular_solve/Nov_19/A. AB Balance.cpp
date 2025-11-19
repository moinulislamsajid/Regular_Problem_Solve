#include<bits/stdc++.h>
using namespace std;

void solve()
{
    string s;
    cin>>s;

    int n = s.size();

    if(s[0]==s[n-1])
    {
        cout<<s<<'\n';
    }
    else
    {
        if(s[n-1]=='a')
        {
            s[n-1]='b';
            cout<<s<<'\n';
        }
        else
        {
            s[n-1]='a';

            cout<<s<<'\n';
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
