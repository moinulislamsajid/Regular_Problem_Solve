#include<bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin>>n;

    vector<int> v;

    for(int i=0; i<n; i++)
    {
        int x,y;
        cin>>x>>y;

        int diff = x-y;
        v.push_back(diff);
    }

    int cnt=0;

    for(int i=0; i<n; i++)
    {
        if(v[i]>0)
        {
            cnt++;
        }
    }

    cout<<cnt<<endl;
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
