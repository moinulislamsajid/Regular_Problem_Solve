#include<bits/stdc++.h>
using namespace std;

void solve()
{
    string s;
    cin>>s;

    vector<string> v;

    for(int i=0; i<5; i++)
    {
        string ss;
        cin>>ss;
        v.push_back(ss);
    }


    /*for(string sp : v)
    {
        cout<<sp<<"\n";
    }*/

    // to check same rank

    bool sameRank=false;
    bool sameSuite=false;

    char fch = s[0];
    char sch = s[1];

    for(string ss : v)
    {
        char c1 = ss[0];
        char c2 = ss[1];

        if(fch==c1)
        {
            sameRank=true;
            break;
        }
        if(sch==c2)
        {
            sameSuite=true;
            break;
        }
    }

    if(sameRank || sameSuite)
    {
        cout<<"YES\n";
        return;

    }

    cout<<"NO\n";
}



int main()
{
    solve();
}
