#include<bits/stdc++.h>
#define ll long long int
using namespace std;

void solve()
{
    int n;
    cin>>n;

    vector<int> v(n);
    ll sum=0;
    for(int i=0; i<n; i++)
    {
        cin>>v[i];
        sum+=v[i];
    }

    sort(v.begin(),v.end());
    if(v[0]==v[n-1])
    {
        cout<<0<<"\n";
        return;
    }

    if(sum%n!=0)
    {
        cout<<-1<<"\n";
        return;
    }

    ll cnt=0;

    int num = sum/n;

    for(int i=0; i<n; i++)
    {
        if(v[i]>num)
        {
            cnt++;
        }
    }

    cout<<cnt<<"\n";
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
