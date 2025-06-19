#include<bits/stdc++.h>
using namespace std;


void solve()
{
    int key;
    cin>>key;

    vector<int> v(3);
    for(int i=0; i<3; i++)
    {
        cin>>v[i];
    }

    int zero_indx=0;
    for(int i=0; i<3; i++)
    {
        if(v[i]==0)
        {
            zero_indx=i+1;
            break;
        }
    }

    if(key==zero_indx)
    {
        cout<<"NO\n";
        return;
    }

    int cnt=1;

    int i=key-1;;
    while(v[i]!=0)
    {
        cnt++;
        i=v[i]-1;
    }
    if(cnt==3)
    {
        cout<<"YES\n";
    }
    else
    {
        cout<<"NO\n";
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
