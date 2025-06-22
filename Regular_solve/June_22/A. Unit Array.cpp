#include<bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin>>n;

    vector<int> v(n);
    int oneP=0,oneM=0,sum=0,mul=1;
    for(int i=0; i<n; i++)
    {
        cin>>v[i];
        sum+=v[i];
        mul*=v[i];
        if(v[i]==-1)
        {
            oneM++;
        }
        else
        {
            oneP++;
        }
    }
    //cout<<sum<<endl;
    //cout<<mul<<endl;
    if(sum>=0 && mul==1)
    {
        cout<<0<<'\n';
        return;
    }

    if(oneM>oneP)
    {
        if(n%2==0)
        {
            if(n==2)
            {
                cout<<oneM<<'\n';
                return;
            }
            if(oneM==n)
            {
                cout<<oneM/2<<'\n';
                return;
            }
            else
            {
                cout<<(n/2)-oneP<<'\n';
                return;
            }

        }
        else
        {
           if(n==1)
           {
               cout<<1<<endl;
               return;
           }
           else if(n==3)
           {
               cout<<3<<endl;
               return;
           }
           else
           {
                cout<<oneM-2<<endl;
            return;
           }
        }
    }
    //int val =  min(oneP,oneM);
    if(min(oneP,oneM)==0)
    {
        cout<<max(oneP,oneM)<<'\n';
    }
    else
    {
        cout<<min(oneP,oneM)<<'\n';
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
