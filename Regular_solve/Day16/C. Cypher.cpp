#include<bits/stdc++.h>
using namespace std;


void solve()
{
    int n;
    cin>>n;

    vector<int> v(n);
    for(int i=0; i<n; i++)
    {
        cin>>v[i];
    }

    vector<pair<int,string>> vp;

    for(int i=0; i<n; i++)
    {
        int x;
        string s;
        cin>>x>>s;
        vp.push_back({x,s});
    }

    /*for(auto it : vp)
    {
        cout<<it.first<<" "<<it.second<<" ";
    }

    cout<<endl;*/
    vector<int> ans;
    for(int i=0; i<n; i++)
    {
        int in = v[i];
        for(char ch : vp[i].second)
        {
            if(ch=='U')
            {
                if(in==0)
                {
                    in=9;
                }
                else
                {
                     in-=1;
                }


            }
            else if(ch=='D')
            {
                if(in==9)
                {
                    in=0;
                }
                else
                {
                     in+=1;
                }

            }
        }

        cout<<in<<" ";

    }

    cout<<endl;

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
