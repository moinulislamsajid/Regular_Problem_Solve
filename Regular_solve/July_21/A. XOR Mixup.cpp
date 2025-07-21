#include<bits/stdc++.h>
using namespace std;

void solve()
{

    //cout<<(1^10^7^10)<<endl;

    int n;
    cin>>n;

    vector<int> v(n);

    for(int i=0; i<n; i++)
    {
        cin>>v[i];
    }

    cout<<v[0]<<endl;


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
