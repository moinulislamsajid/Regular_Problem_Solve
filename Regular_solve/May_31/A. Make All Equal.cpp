#include<bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin>>n;

    vector<int> v(n);
    set<int> st;

    for(int i=0; i<n; i++)
    {
        int c;
        cin>>c;
        v[i]=c;
        st.insert(c);
    }

    if(n==1)
    {
        cout<<0<<'\n';
        return;
    }

    if(st.size()==n)
    {
        cout<<n-1<<'\n';
        return;
    }

    int mx = INT_MIN;
    int cnt=1;

    for(int i=0; i<n-1; i++)
    {
        for(int j=i+1; j<n; j++)
        {
            if(v[i]==v[j])
            {
                cnt++;
            }
        }
        mx = max(cnt,mx);
        cnt=1;
    }


    cout<<n-mx<<'\n';
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
