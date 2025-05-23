#include<bits/stdc++.h>
#define ll long long int
using namespace std;

void solve()
{
    vector<int> v(7);

    for(int i=0; i<7; i++)
    {
        cin>>v[i];
    }

    sort(v.begin(),v.end());

    ll last = v[6]-v[0]-v[1];
    cout<<v[0]<<" "<<v[1]<<" "<<last<<"\n";
}

int main()
{
    ll t;
    cin>>t;

    while(t--)
    {
        solve();
    }
}
