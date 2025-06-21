#include<bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin>>n;

    vector<int> v;

    for(int i=0; i<n; i++)
    {
        int x;
        cin>>x;
        int c = abs(x);
        v.push_back(c);
    }

    sort(v.begin(),v.end());

    if(v[0]==0)
    {
        cout<<0<<endl;
        return;
    }

    cout<<v[0]-0<<endl;
}

int main()
{
    solve();
}
