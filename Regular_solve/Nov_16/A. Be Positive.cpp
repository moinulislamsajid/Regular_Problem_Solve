#include<bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin>>n;


    vector<int> v(n);
    int zero=0,mone=0;
    for(int i=0; i<n; i++)
    {
        cin>>v[i];

        if(v[i]==0)
        {
            zero++;
        }
        else if(v[i]==-1)
        {
            mone++;
        }
    }


    if(mone%2==1)
    {
        cout<<zero+2<<'\n';
    }
    else
    {
        cout<<zero<<'\n';
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
