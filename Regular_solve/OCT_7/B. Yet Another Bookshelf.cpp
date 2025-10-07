#include<bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin>>n;

    vector<int> v(n);
    for(int i=0; i<n; i++)
    {
        cin>>v[i];
    }
    int cnt =0;


    int st=0,en=0;

    for(int i=0; i<n; i++)
    {
        if(v[i]==1)
        {
            st=i;
            break;
        }
    }

    for(int i=n-1; i>0; i--)
    {
        if(v[i]==1)
        {
            en=i;
            break;
        }
    }

    //cout<<st<<" : "<<en<<endl;

    for(int i=st+1; i<=en; i++)
    {
        if(v[i]==0)
        {
            cnt++;
        }
    }

    cout<<cnt<<'\n';
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
