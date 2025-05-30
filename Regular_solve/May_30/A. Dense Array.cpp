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

    for(int i=0; i<n-1; i++)
    {
        int a = v[i];
        int b = v[i+1];

        int mx = max(a,b);
        int mn = min(a,b);

        while(mx>mn*2)
        {
            mn*=2;
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
