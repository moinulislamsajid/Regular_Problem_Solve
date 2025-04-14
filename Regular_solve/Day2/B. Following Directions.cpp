#include<bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin>>n;

    string s;
    cin>>s;

    int x=0,y=0;

    for(int i=0; i<n; i++)
    {
        if(s[i]=='L')
        {
            x--;
        }
        if(s[i]=='R')
        {
            x++;
        }
        if(s[i]=='U')
        {
            y++;
        }
        if(s[i]=='D')
        {
            y--;
        }

        if(x==1 && y==1)
        {
            cout<<"YES"<<endl;
            return;
        }
    }

    cout<<"NO"<<endl;
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
