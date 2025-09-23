#include<bits/stdc++.h>
using namespace std;


void solve()
{
    string s;
    cin>>s;

    s = s.substr(0,s.size()/2);

    int k = unique(s.begin(),s.end()) - s.begin();

    if(k==1)
    {
        cout<<"NO\n";
    }
    else
    {
        cout<<"YES\n";
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
