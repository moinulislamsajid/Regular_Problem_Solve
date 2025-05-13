#include<bits/stdc++.h>
#define ll long long int
using namespace std;

int main()
{
    ll t;
    cin>>t;

    while(t--)
    {
        ll a,b;
        cin>>a>>b;

        if((a+b)%2==1)
        {
            cout<<"Alice\n";
        }
        else
        {
            cout<<"Bob\n";
        }
    }
}
