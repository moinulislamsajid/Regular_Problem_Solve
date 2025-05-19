#include<bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin>>n;

    vector<char> v(n);
    vector<char> v1(n);

    for(int i=0; i<n; i++)
    {
        cin>>v[i];
    }
    for(int i=0; i<n; i++)
    {
        cin>>v1[i];
    }

    int res=0;

    for(int i=0; i<n; i++)
    {
        int num1 = v[i]-'0';
        int num2 = v1[i]-'0';

        int diff = abs(num1-num2);
        int mn = 10-diff;
        res+=min(diff,mn);
    }

    cout<<res<<endl;
}

int main()
{
    solve();
}
