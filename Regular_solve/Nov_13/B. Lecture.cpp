#include<bits/stdc++.h>
using namespace std;

void solve()
{
    int n,m;
    cin>>n>>m;

    unordered_map<string,string> ump;

    for(int i=0; i<m; i++)
    {
        string a,b;
        cin>>a;
        cin>>b;

        ump[a]=b;
    }

    vector<string> v(n);

    for(int i=0; i<n; i++)
    {
        cin>>v[i];
    }

    for(int i=0; i<n; i++)
    {
        string a = v[i];
        string b = ump[a];

        if(a.size()>b.size())
        {
            cout<<b;
        }
        else
        {
            cout<<a;
        }
        if(i!=n-1)
        {
            cout<<" ";
        }
    }

    cout<<"\n";
}

int main()
{
    solve();
}
