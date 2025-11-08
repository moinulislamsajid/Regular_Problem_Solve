#include<bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin>>n;

    string s;
    cin>>s;

    int cnt1=0,cnt0=0;

    for(int i=0; i<s.size(); i++)
    {
        if(s[i]=='0')
        {
            cnt0++;
        }
        else
        {
            cnt1++;
        }
    }

    cout<<abs(cnt0-cnt1)<<'\n';
}


int main()
{
    solve();
}
