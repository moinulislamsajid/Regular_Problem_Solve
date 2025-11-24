#include<bits/stdc++.h>
using namespace std;

void solve()
{
    long long int n;
    cin>>n;

    if(n%2==1 || n<4)
    {
        cout<<-1<<'\n';
        return;
    }

    long long mn = (n+5)/6;
    long long mx = n/4;


    cout<<mn<<" "<<mx<<'\n';

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
