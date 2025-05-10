#include<bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin>>n;
    vector<int> v(n);
    vector<int> suffix(n+1,0);
    for(int i=0; i<n; i++)
    {
        cin>>v[i];
        suffix[i+1] = suffix[i] + (v[i]== 2 ? 1 : 0);
    }

    for(int i=1; i<n; i++)
    {
        int left = suffix[i];
        int right = suffix[n] - suffix[i];

        if(left==right)
        {
            cout<<i<<endl;
            return;
        }
    }

    cout<<-1<<endl;
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
