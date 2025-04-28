#include<bits/stdc++.h>
using namespace std;

void solve()
{
    string s;
    cin>>s;

    bool check = false;

    for(int i=0; i<s.size(); i++)
    {
        if(s[i]!=s[0])
        {
            swap(s[i],s[0]);
            check = true;
            break;
        }
    }

    if(check)
    {
        cout<<"YES"<<endl;
        cout<<s<<endl;
    }
    else
    {
        cout<<"NO"<<endl;
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
