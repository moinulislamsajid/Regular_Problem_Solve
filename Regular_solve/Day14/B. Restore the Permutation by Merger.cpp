#include<bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin>>n;

    vector<int> v(n*2);
    for(int i=0; i<n*2; i++)
    {
        cin>>v[i];
    }

    unordered_set<int> st;
    vector<int> res;

    for(int in : v)
    {
        if(st.find(in)==st.end())
        {
            st.insert(in);
            res.push_back(in);
        }
    }

    for(int in : res)
    {
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
