#include<bits/stdc++.h>
using namespace std;

void solve()
{
    int n,x,k;
    cin>>n>>x>>k;
    if(n==1 && k==1)
    {
        cout<<"NO"<<endl;
        return;
    }

    if(n!=1 && x==1)
    {
        cout<<"NO"<<endl;
        return;
    }

    if((n%2==1 && k==1) && (x<=2))
    {
        cout<<"NO"<<endl;
        return;
    }

    if(n%2==0)
    {
        if(k==1)
        {
            cout<<"YES"<<endl;
            cout<<n/2<<endl;
            for(int i=0; i<n/2; i++)
            {
                cout<<2<<" ";
            }
            cout<<endl;
        }
        else
        {
            cout<<"YES"<<endl;
            cout<<n<<endl;
            for(int i=0; i<n; i++)
            {
                cout<<1<<" ";
            }
            cout<<endl;
        }
    }
    else
    {
        if(x>=2)
        {
            if(k==1)
            {
                if(x==n)
                {
                    cout<<"YES"<<endl;
                    cout<<1<<endl;
                    cout<<n<<endl;
                }
                else
                {
                    cout<<"YES"<<endl;
                    cout<<(n-1)/2<<endl;
                    for(int i=0; i<(n-3)/2; i++)
                    {
                        cout<<2<<" ";
                    }
                    cout<<3<<endl;
                }
            }
            else
            {
                cout<<"YES"<<endl;
                cout<<n<<endl;
                for(int i=0; i<n; i++)
                {
                    cout<<1<<" ";
                }
                cout<<endl;
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
