#include<bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin>>n;

    vector<int> v(n-1);
    int sum=0;
    for(int i=0; i<n-1; i++)
    {
        cin>>v[i];
        sum+=v[i];
    }

    if(sum<0)
    {
        cout<<abs(sum)<<endl;
    }else
    {
        cout<<'-'<<sum<<endl;
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
