#include<bits/stdc++.h>
using namespace std;


void solve()
{
    int a,b,c,d;
    cin>>a>>b>>c>>d;

    if(b<=d&&c<=a+d-b)
    {
        cout<<(d-b)+(a+d-b-c)<<endl;
        return;
    }
    else
    {
        cout<<-1<<endl;
        return;
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
