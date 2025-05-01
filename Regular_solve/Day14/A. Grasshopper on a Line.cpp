#include<bits/stdc++.h>
using namespace std;

void solve()
{
    int x,k;
    cin>>x>>k;

    if(x%k!=0)
    {
        cout<<1<<endl;
        cout<<x<<endl;
    }
    else
    {
        if(x%2==0 && k%2==0)
        {
            cout<<2<<endl;
            cout<<x-3<<" "<<3<<endl;
        }
        else if(x%2==0 && k%2==1)
        {
            cout<<2<<endl;
            cout<<x-2<<" "<<2<<endl;
        }
        else if(x%2==1 && k%2==1)
        {
            cout<<2<<endl;
            int n = x/2;
            cout<<n<<" "<<n+1<<endl;
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
