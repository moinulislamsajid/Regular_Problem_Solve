#include<bits/stdc++.h>
using namespace std;


void solve()
{
    long long int a,b,k;
    cin>>a>>b>>k;

    if(k%2==0)
    {
        long long int ss = a*(k/2);
        long long int s1 = -b*(k/2);
        cout<<ss+s1<<'\n';
    }
    else
    {
       long long int sum5 = a;
       sum5+= a*(k/2);
       long long int sum6 = -b *(k/2);
       cout<<sum5+sum6<<'\n';

    }
}


int main()
{
    long long int t;
    cin>>t;

    while(t--)
    {
        solve();
    }
}
