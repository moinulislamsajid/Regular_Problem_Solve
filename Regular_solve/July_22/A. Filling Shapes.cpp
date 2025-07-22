#include<bits/stdc++.h>
using namespace std;


void solve()
{
    int n;
    cin>>n;

    if(n%2==0)
    {
        cout<<(1<<(n/2))<<endl;
    }
    else
    {
        cout<<"0"<<endl;
    }
}


int main()
{
    solve();
}
