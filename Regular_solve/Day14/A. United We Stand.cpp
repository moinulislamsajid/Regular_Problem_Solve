#include<bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin>>n;

    vector<int> v(n);
    v.assign(n,0);

    for(int i=0; i<n; i++)
    {
        cin>>v[i];
    }

    sort(v.begin(),v.end());

    if(v[n-1]==v[0])
    {
        cout<<-1<<endl;
        return;
    }
    else
    {
        int it=0;

        while(v[it]==v[0])
        {
            it++;
        }
        cout<<it<<" "<<n-it<<endl;
        for(int i=0; i<it; i++)
        {
            cout<<v[i]<<" ";
        }
        for(int j=it; j<n; j++)
        {
            cout<<v[j]<<" ";
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
