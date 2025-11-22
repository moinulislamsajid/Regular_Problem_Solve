#include<bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin>>n;

    string s;
    cin>>s;

    int onecnt=0;

    for(int i=0; i<n; i++)
    {
        if(s[i]=='1')
        {
            onecnt++;
        }
    }

    int sum=0;

    for(int i=0; i<n; i++)
    {
        if(s[i]=='1')
        {
            sum+=onecnt-1;
        }
        else
        {
            sum+=onecnt+1;
        }
    }

    cout<<sum<<'\n';
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
