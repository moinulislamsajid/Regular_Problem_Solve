#include<bits/stdc++.h>
#define ll long long int
using namespace std;

int main()
{
    ll t;
    cin>>t;

    while(t--)
    {
        ll m;
        cin>>m;

        ll po=1;

        while(po*10<=m)
        {
            po*=10;
        }
        cout<<m-po<<endl;
    }

}
