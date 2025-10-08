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

    int cnt=1,mx = INT_MIN;

    sort(v.begin(),v.end());

    for(int i=1; i<n; i++)
    {
        if(v[i]==v[i-1])
        {
            cnt++;
        }
        else
        {
            mx = max(mx,cnt);
            cnt=1;
        }
    }

    //cout<<mx<<endl;
    cout<<max(mx,cnt)<<'\n';

}


int main()
{
    solve();
}


