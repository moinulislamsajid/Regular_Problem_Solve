#include<bits/stdc++.h>
using namespace std;


void solve()
{
    int n,s;
    cin>>n>>s;

    vector<int> v(n);

    for(int i=0; i<n; i++)
    {
        cin>>v[i];
    }


   int mn = min(abs(s-v[0]),abs(s-v.back())) + v.back()-v[0];
   cout<<mn<<endl;

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
