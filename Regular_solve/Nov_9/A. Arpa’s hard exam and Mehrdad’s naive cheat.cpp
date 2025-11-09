#include<bits/stdc++.h>
using namespace std;


void solve()
{
    long long int n;
    cin>>n;

    if(n==0)
    {
        cout<<1<<'\n';
        return;
    }

    long long int lastDigit;
    long long int rem = n%4;

    if(rem==1)
    {
        lastDigit=8;
    }
    else if(rem==2)
    {
        lastDigit=4;
    }
    else if(rem==3)
    {
        lastDigit=2;
    }
    else
    {
        lastDigit=6;
    }

    cout<<lastDigit<<'\n';
}

int main()
{
    solve();
}
