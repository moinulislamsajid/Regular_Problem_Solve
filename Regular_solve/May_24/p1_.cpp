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

    sort(v.begin(),v.end());

    if((v[0]%2==0 && v[n-1]%2==0) || (v[0]%2==1 && v[n-1]%2==1))
    {
        cout<<0<<endl;
        return;
    }

    if(n==2)
    {
        cout<<1<<endl;
        return;
    }

    int cnt1=0,cnt11=0;

    if(v[n-1]%2==0)
    {
        for(int i=0; i<n; i++)
        {
            if(v[i]%2==0)
            {
                break;
            }
            else
            {
                cnt1++;
            }
        }

        for(int i=n-1; i>0; i--)
        {
            if(v[i]%2==1)
            {
                break;
            }
            else
            {
                cnt11++;
            }
        }

        cout<<min(cnt11,cnt1)<<endl;
        return;
    }

    int c1=0,c2=0;
    if(v[n-1]%2==1)
    {
        for(int i=0; i<n; i++)
        {
            if(v[i]%2==1)
            {
                break;
            }
            else
            {
                c1++;
            }
        }
        for(int i=n-1; i>0; i--)
        {
            if(v[i]%2==0)
            {
                break;
            }
            else
            {
                c2++;
            }
        }

        cout<<min(c1,c2)<<endl;
        return;
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
