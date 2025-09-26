#include<bits/stdc++.h>
using namespace std;

void solve()
{
    int k,x;
    cin>>k>>x;

    for(int i=0; i<k; i++)
    {
        if((x-1)%3==0)
        {
            int prev = (x-1)/3;

            if(prev%2==1)
            {
                x=prev;
                continue;
            }
        }
        x = x*2;
    }

    cout<<x<<"\n";
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
