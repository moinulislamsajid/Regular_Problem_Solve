#include<bits/stdc++.h>
using namespace std;

void solve()
{
    long long int n,b,d,sum=0;
    cin>>n>>b>>d;

    vector<long long int> orange(n);
    for(int i=0; i<n; i++)
    {
        cin>>orange[i];

    }

    long long int cnt=0,i=0;

    while(i!=n)
    {
        if(orange[i]<=b)
        {
            sum+=orange[i];
        }

        if(sum>d)
        {
            cnt++;
            sum=0;
        }
        i++;
    }

    cout<<cnt<<'\n';
}

int main()
{
    solve();
}
