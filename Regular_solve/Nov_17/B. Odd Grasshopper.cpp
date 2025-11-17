#include<bits/stdc++.h>
using namespace std;


long long solve(int mod,long long int n)
{

    // if mode is equal = 0;

    if(mod==0)
    {
        return 0;
    }

    if(mod==1)
    {
        return n;
    }

    if(mod==2)
    {
        return -1;
    }

    return -n - 1;
}

int main()
{
    int t;
    cin>>t;

    while(t--)
    {
        long long int x0,n;
        cin>>x0>>n;

        long  long int val = solve(n%4,n);

        long long int ans;
        if(x0%2==0)
        {
            ans = x0-val; // if even that why subtraction
        }
        else
        {
            ans = x0+val;
        }

        cout<<ans<<'\n';
    }
}
