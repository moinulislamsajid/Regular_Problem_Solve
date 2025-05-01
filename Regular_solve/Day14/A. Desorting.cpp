#include<bits/stdc++.h>
using namespace std;

void solve()
{
    long long int n;
    cin>>n;

    vector<long long int> v(n);

    for(int i=0; i<n; i++)
    {
        cin>>v[i];

    }


    bool ok = false;
    for(int i=1; i<n; i++)
    {
        long long dis1 = v[i]-v[i-1];
        if(dis1<0)
        {
            ok=true;
            break;
        }
    }

    long long int mnx = INT_MAX;

    for(int i=1; i<n; i++)
    {
        long long dis11 = v[i]-v[i-1];
        //cout<<dis11<<endl;
        mnx = min(mnx,dis11);
    }

    //cout<<mnx<<endl;

    if(ok)
    {
        cout<<0<<endl;
    }
    else
    {
        if(mnx== 0 || mnx == 1)
        {
            cout<<1<<endl;
        }
        else if(mnx==2)
        {
            cout<<2<<endl;
        }
        else
        {
            if(mnx%2==0)
            {
                cout<<(long long int) (mnx/2)+1<<endl;
            }
            else
            {
                double val = (double) (mnx)/2.0;
                cout<<(long long int) ceil(val)<<endl;
            }
        }

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
