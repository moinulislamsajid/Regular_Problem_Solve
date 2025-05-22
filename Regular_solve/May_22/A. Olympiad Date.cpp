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

    bool ok=false;

    int o_c=0,on_c=0,t_c=0,th_c=0,f_c=0;

    for(int i=0; i<n; i++)
    {
        if(v[i]==0)
        {
            o_c++;
        }
        else if(v[i]==1)
        {
            on_c++;
        }
        else if(v[i]==2)
        {
            t_c++;
        }
        else if(v[i]==3)
        {
            th_c++;
        }
        else if(v[i]==5)
        {
            f_c++;
        }

        //cout<<o_c<<" "<<on_c<<" "<<t_c<<" "<<th_c<<" "<<f_c<<endl;
        if(o_c>=3 && on_c>=1 && t_c>=2 && th_c>=1 && f_c>=1)
        {
            bool ok=true;
            cout<<i+1<<endl;
            return;
        }

    }



    if(!ok)
    {
        cout<<0<<endl;
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
