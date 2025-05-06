#include<bits/stdc++.h>
using namespace std;


void solve()
{
    int n;
    cin>>n;

    vector<int>v(n);
    set<int> st;

    for(int i=0; i<n; i++)
    {
        int x;
        cin>>x;
        v.push_back(x);
        st.insert(x);
    }

    cout<<st.size()<<endl;
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
