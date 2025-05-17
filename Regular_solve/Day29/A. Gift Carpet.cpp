#include<bits/stdc++.h>
using namespace std;

void solve()
{
    int n,m;
    cin>>n>>m;

    vector<string> v(n);
    for(int i=0; i<n; i++)
    {
        cin>>v[i];
    }

    string target = "vika";
    int cnt=0;

    for(int i=0; i<m; i++)
    {
        bool ok=false;

        for(int j=0; j<n; j++)
        {
            if(v[j][i]==target[cnt])
            {
                ok=true;
            }
        }

        if(ok)
        {
            cnt++;
            if(cnt==4)
            {
                break;
            }
        }
    }

    if(cnt==4)
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
