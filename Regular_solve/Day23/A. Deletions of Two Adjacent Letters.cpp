#include<bits/stdc++.h>
using namespace std;

void solve()
{
    string s;
    cin>>s;
    //string ss = s;
    int sz = s.size();
    char ch;
    cin>>ch;
    bool ok=false;
    for(char c : s)
    {
        if(c==ch)
        {
            ok=true;
            break;
        }
    }

    if(!ok)
    {
        //cout<<"Check"<<endl;
        cout<<"NO"<<endl;
        return;
    }

    char first = s[0];
    char last = s[sz-1];

    if(ch==first || ch==last)
    {
        cout<<"YES"<<endl;
        return;
    }
    bool check=false;
    for(int i=0; i<sz; i++)
    {
        if(s[i]==ch && (i+1)%2==1)
        {
            check=true;
            break;
        }
    }

    if(check)
    {
        cout<<"YES"<<endl;
    }
    else
    {
        //cout<<"CHECK"<<endl;
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
