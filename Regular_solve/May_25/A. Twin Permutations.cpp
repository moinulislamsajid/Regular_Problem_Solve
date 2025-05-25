#include<bits/stdc++.h>
using namespace std;


void solve()
{
    int n;
    cin>>n;

    for(int i=0; i<n; i++)
    {
        int g;
        cin>>g;

        cout<<n+1-g<<" ";
    }
    cout<<endl;
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
