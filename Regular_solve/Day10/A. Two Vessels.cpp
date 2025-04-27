#include<bits/stdc++.h>
using namespace std;

void solve()
{
    int a,b,c;
    cin>>a>>b>>c;

    int diff = abs(a-b);

    double half_with = static_cast<double> (diff)/c;

    cout<<ceil(half_with/2)<<endl;
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
