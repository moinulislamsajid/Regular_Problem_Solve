#include<bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin>>n;

    string s;
    cin>>s;

    set<string> st;

    for(int i=0; i<n-1; i++)
    {
        string sb = s.substr(i,2);
        st.insert(sb);
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
