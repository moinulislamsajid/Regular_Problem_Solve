#include<bits/stdc++.h>
using namespace std;

void solve()
{
    long long int a,b;
    cin>>a>>b;

    if(a==b)
    {
        cout<<0<<" "<<0<<'\n';
    }
    else
    {
        long long int best = abs(a-b);
        long long int mnStep = min(a%best,best-a%best);

        cout<<best<<" "<<mnStep<<'\n';
    }


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
