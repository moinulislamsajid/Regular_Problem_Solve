#include<bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin>>n;
    string s;
    cin>>s;

    char ch = s[0];
    string ans;
    ans.push_back(ch);
    int i=1;
    while(true)
    {
        if(s[i]==ch && s[i+1]!='\0')
        {
            ch=s[i+1];
            ans.push_back(ch);
            i+=2;
        }
        else
        {
            i++;
        }

        if(s[i]=='\0')
        {
            break;
        }

    }

    cout<<ans<<endl;
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
