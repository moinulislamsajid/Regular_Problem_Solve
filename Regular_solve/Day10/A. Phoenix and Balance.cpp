#include<bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin>>n;

    vector<long long int> v;

    for(int i=0; i<n; i++)
    {
        long long po = pow(2,i+1);
        v.push_back(po);
    }

    long long sum1=0,sum2=0;
    //cout<<v[n-1]<<endl;
    sum1+=v[n-1];
    for(int i=0; i<(n/2)-1; i++)
    {
        sum1+=v[i];
    }

    for(int i=(n/2)-1; i<n-1; i++)
    {
        //cout<<v[i]<<endl;
        sum2+=v[i];
    }

    cout<<sum1-sum2<<endl;
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
