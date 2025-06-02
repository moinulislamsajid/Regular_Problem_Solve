#include<bits/stdc++.h>
using namespace std;


void solve()
{
    vector<int> v(3);
    int od_C=0,ev_C=0;
    for(int i=0; i<3; i++)
    {
        cin>>v[i];

        if(v[i]%2==0)
        {
            ev_C++;
        }
        else
        {
            od_C++;
        }
    }

    sort(v.begin(),v.end());

    int sme_cnt=0;
    bool checkeven=false;
    for(int i=1; i<3; i++)
    {
        if(v[i]==v[i-1])
        {
            sme_cnt++;
            if(v[i]%2==0)
            {
                checkeven=true;
            }
        }
    }
    if(sme_cnt==2 && checkeven)
    {
        cout<<"YES\n";
        return;
    }

    if(sme_cnt==2 && !checkeven)
    {
        cout<<"NO\n";
        return;
    }

    if((sme_cnt==1 && checkeven) && ev_C==3)
    {
        cout<<"YES\n";
        return;
    }
    if((sme_cnt==1 && checkeven) && ev_C<3)
    {
        cout<<"NO\n";
        return;
    }

    if((sme_cnt==1 && !checkeven) && ev_C==1)
    {
        cout<<"YES\n";
        return;
    }

    if(od_C==2)
    {
        if(v[0]+v[1]==v[2])
        {
            cout<<"YES\n";
            return;
        }
        else
        {
            cout<<"NO\n";
            return;
        }
    }

    if(ev_C==3)
    {
        if(v[0]+v[1]==v[2])
        {
            cout<<"YES\n";
            return;

        }
        else
        {
            cout<<"NO\n";
            return;
        }
    }
    if(ev_C==2)
    {
        cout<<"NO\n";
        return;
    }

    if(od_C==3)
    {
        cout<<"NO\n";
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
