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

    bool ok=false;

    set<int> st;

    for(int i=n-1; i>=0; i--)
    {
        if(st.count(v[i]))
        {
            cout<<i+1<<endl;
            ok=true;
            break;
        }

        st.insert(v[i]);
    }

    if(!ok)
    {
        cout<<0<<endl;
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
