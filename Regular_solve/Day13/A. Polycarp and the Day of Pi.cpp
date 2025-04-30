#include<bits/stdc++.h>
using namespace std;

void solve()
{
    string s="314159265358979323846264338327";

    //cout<<s.size()<<endl;
    int cnt =0;

    string ss;
    cin>>ss;

    if(s[0]!=ss[0])
    {
        cout<<0<<endl;
        return;
    }
    else
    {
        cnt=1;
        for(int i=1; i<ss.size(); i++)
        {
            if(s[i]==ss[i])
            {
                cnt++;
            }
            else
            {
                break;
            }
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
