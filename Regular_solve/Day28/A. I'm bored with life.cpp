#include<bits/stdc++.h>
#define ll long long int
using namespace std;



int main()
{
    ll a,b;
    cin>>a>>b;

    ll mn = min(a,b);

    ll ans=1;

    for(ll i=1; i<=mn; i++)
    {
        ans*=i;
    }
    cout<<ans<<endl;

}
