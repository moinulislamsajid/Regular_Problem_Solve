#include<bits/stdc++.h>
using namespace std;

void solve()
{
    string s;
    cin>>s;

    int sz = s.size();

    int fst=0,lst=0;
    for(int i=0; i<sz; i++)
    {
        if(s[i]=='1')
        {
            fst=i;
            break;
        }
    }

    for(int i=sz-1; i>0; i--)
    {
        if(s[i]=='1')
        {
            lst=i;
            break;
        }
    }

    //cout<<fst<<" "<<lst<<endl;

    int cnt=0;

    for(int i=fst; i<lst; i++)
    {
        if(s[i]=='0')
        {
            cnt++;
        }
    }

    cout<<cnt<<endl;
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
