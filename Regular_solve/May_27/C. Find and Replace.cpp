#include<bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin>>n;

    string s;
    cin>>s;

    int col[26];
    fill(col,col+26,-1);
    col[s[0]-'a']=0;

    for(int i=1; i<n; i++)
    {
        int curr = s[i]-'a';
        int prev = s[i-1]-'a';


        if(col[curr]==-1)
        {
            col[curr] = 1 - col[prev];
        }

        if(col[curr]==col[prev])
        {
            cout<<"NO\n";
            return;
        }
    }

    cout<<"YES\n";
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
