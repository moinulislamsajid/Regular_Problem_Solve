#include<bits/stdc++.h>
using namespace std;

void solve()
{
    vector<int> v(3);
    for(int i=0; i<3; i++)
    {
        cin>>v[i];
    }

    sort(v.begin(),v.end());

    int mx1 = max(v[0],v[1]);
    int mx2 = max(v[0],v[2]);
    int mx3 = max(v[1],v[2]);

    if((mx1==mx2) && (mx2==mx3))
    {
        cout<<"YES"<<endl;
        cout<<v[0]<<" "<<v[0]<<" "<<v[2]<<endl;
    }
    else
    {
        cout<<"NO"<<endl;
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
