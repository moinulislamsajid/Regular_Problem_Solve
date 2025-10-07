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

    for(int i=0; i<n; i++)
    {
        int A =i;
        int b = v[A]-1;
        int c = v[b]-1;

        if(v[c]-1==A)
        {
            cout<<"YES\n";
            return;
        }
    }

    cout<<"NO\n";
}

int main()
{
    solve();
}
