#include<bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin>>n;

    string s;
    cin>>s;

    string ans;

    for(int i=0; i<n; i++)
    {
        if(s[i]=='L' || s[i]=='R')
        {
            ans.push_back(s[i]);
        }
        else if(s[i]=='U')
        {
            ans.push_back('D');
        }
        else
        {
            ans.push_back('U');
        }
    }

    cout<<ans<<endl;
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
