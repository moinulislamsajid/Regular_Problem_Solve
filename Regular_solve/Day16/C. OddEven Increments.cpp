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

    int ev=0,od=0;

    for(int i=0; i<n; i++)
    {
        if(v[i]%2==0)
        {
            ev++;
        }
        else
        {
            od++;
        }
    }

    if(ev==n || od==n)
    {
        cout<<"YES\n";
        return;
    }

    vector<int> evv;
    vector<int> odv;
    for(int i=0; i<n; i++)
    {
        if(i%2==0)
        {
            evv.push_back(v[i]+1);
        }
        else
        {
            evv.push_back(v[i]);
        }
    }

    int ev1=0,od1=0;
    for(int i=0; i<n; i++)
    {
        if(evv[i]%2==0)
        {
            ev1++;
        }
        else
        {
            od1++;
        }
    }

    if(ev1==n || od1==n)
    {
        cout<<"YES\n";
        return;
    }

    int ev2=0,od2=0;
    for(int i=0; i<n; i++)
    {
        if(i%2==1)
        {
            odv.push_back(v[i]+1);
        }
        else
        {
            odv.push_back(v[i]);
        }
    }

    for(int i=0; i<n; i++)
    {
        if(odv[i]%2==0)
        {
            ev2++;
        }
        else
        {
            od2++;
        }
    }

    if(ev2==n || od2==n)
    {
        cout<<"YES\n";
        return;
    }

    cout<<"NO"<<endl;
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
