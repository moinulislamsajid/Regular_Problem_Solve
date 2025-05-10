#include<bits/stdc++.h>
#define ll long long int
using namespace std;

int main()
{
    ll t;
    cin>>t;

    while(t--)
    {
        ll n;
        cin>>n;
        ll i=1;
        ll cnt=0;
        while(true)
        {
            if(i%2==1)
            {
                cnt++;
                cout<<i<<" ";
            }
            i++;
            if(cnt==n)
            {
                break;
            }
        }

        cout<<endl;
    }
}
