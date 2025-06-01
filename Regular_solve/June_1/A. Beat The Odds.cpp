#include<bits/stdc++.h>
using namespace std;

void solve()
{
    long long int n;
    cin>>n;

    vector<long long int> v(n);
    long long int evCnt=0,odCnt=0;

    for(long long int i=0; i<n; i++)
    {
        cin>>v[i];
         if(v[i]%2==0)
        {
            evCnt++;
        }
        else
        {
            odCnt++;
        }
    }


    if(evCnt==n || odCnt==n)
    {
        cout<<0<<'\n';
        return;
    }
    cout<<min(evCnt,odCnt)<<'\n';
}

int main()
{
    long long int t;
    cin>>t;

    while(t--)
    {
        solve();
    }
}
