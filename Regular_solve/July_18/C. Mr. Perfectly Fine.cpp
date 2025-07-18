#include<bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin>>n;

    vector<pair<int,string>> v;

    for(int i=0; i<n; i++)
    {
        int m;
        cin>>m;

        string s;
        cin>>s;

        v.push_back({m,s});
    }

    /*for(auto it : v)
    {
        cout<<it.first<<" "<<it.second<<endl;
    }*/

    vector<int> t1;
    vector<int> t2;
    vector<int> t3;

    for(auto check : v)
    {
        string ss = check.second;
        int in = check.first;

        //cout<<ss<<endl;
        //cout<<in<<endl;

        //cout<<ss[0]<<"Check String index work or not"<<ss[1]<<endl;
        if(ss[0]=='1' && ss[1]=='1')
        {
            t1.push_back(in);
            //cout<<"Double 1 check"<<endl;
        }
        if(ss[0]=='1')
        {
            t2.push_back(in);
            //cout<<"First One check"<<endl;
        }
        if(ss[1]=='1')
        {
            t3.push_back(in);
            //cout<<"Second One check"<<endl;

        }
    }

   //cout<<t3[0]<<endl;


    if(t2.empty() || t3.empty())
    {
        cout<<-1<<endl;
        return;
    }



    int m1 = *min_element(t2.begin(),t2.end());
    int m2 = *min_element(t3.begin(),t3.end());

    int m3 = m1+m2;
    int m5=INT_MAX;
    if(!t1.empty())
    {
         m5 = *min_element(t1.begin(),t1.end());

    }

    cout<<min(m5,m3)<<endl;
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
