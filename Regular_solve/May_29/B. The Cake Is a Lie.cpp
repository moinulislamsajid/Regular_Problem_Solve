#include<bits/stdc++.h>
using namespace std;

void solve()
{
    int n,m,x;
    cin>>n>>m>>x;

    int res_col=0,res_row=0;

    int i=1,j=1;

    while(j!=m)
    {
        res_col+=i;
        j++;
    }
    while(i!=n)
    {
        res_row+=j;
        i++;
    }

    if((res_row+res_col)==x)
    {
        cout<<"YES\n";
    }
    else
    {
        cout<<"NO\n";
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
