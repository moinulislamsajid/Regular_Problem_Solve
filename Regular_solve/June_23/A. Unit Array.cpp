#include<bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin>>n;

    vector<int> v(n);
    int sum=0,mul=1,p=0,m=0;

    for(int i=0; i<n; i++)
    {
        cin>>v[i];
        sum+=v[i];
        mul*=v[i];
        if(v[i]==1)
        {
            p++;
        }
        else
        {
            m++;
        }
    }

    if(sum>=0 && mul==1)
    {
        cout<<0<<'\n';
        return;
    }

    if(n%2==0)
    {
        if(p==m)
        {
            cout<<1<<'\n';
            return;
        }
        if(m==n && n!=2)
        {

            cout<<(m/2)<<'\n';
            return;
        }

        if(p>m)
        {
            if(m%2==1)
            {
                cout<<1<<'\n';
                return;
            }
        }
        else
        {
            if(n==2)
            {
                cout<<n<<'\n';
                return;
            }
            else
            {
                cout<<((m-p)/2)<<'\n';
                return;
            }
        }

    }
    else
    {

        if(p>m)
        {
            if(m%2==1)
            {
                cout<<1<<'\n';
                return;
            }
        }
        else
        {
            if(m==n && n!=3)
            {
                int ch = m-1;
                int ch1 = ch/2;
                int ch11 = ch1+1;
                int ch111 = m-ch11;

                if(ch111%2==0)
                {
                    cout<<ch11<<'\n';
                    return;
                }
                else
                {
                    cout<<ch11+1<<endl;
                    return;
                }
            }

            if(m%2==0)
            {
                if((m/2)==1)
                {
                    cout<<m/2+1<<'\n';
                    return;
                }
                else
                {
                    cout<<m/2<<'\n';
                    return;
                }
            }
            else
            {

                cout<<m-p<<'\n';
                return;
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
