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
    int cnt=0;

    for(int i=0; i<n; i++)
    {
        if(i+1==v[i])
        {
            cnt++;
        }
    }

    if(cnt%2==0)
    {
        cout<<(cnt/2)<<"\n";
    }
    else
    {
        cout<<(cnt/2)+1<<"\n";
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
