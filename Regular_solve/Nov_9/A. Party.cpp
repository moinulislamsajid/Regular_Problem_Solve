#include<bits/stdc++.h>
using namespace std;


void solve()
{

    int n;
    cin>>n;

    vector<int> v(n+1);

    for(int i=1; i<=n; i++)
    {
        cin>>v[i];
    }

    int ans=0;

    for(int i=1; i<=n; i++)
    {
        int dept =0;
        int curr=i;

        while(curr!=-1)
        {
            dept++;
            curr = v[curr];
        }

        ans = max(ans,dept);
    }

    cout<<ans<<'\n';
}


int main()
{
    solve();
}
