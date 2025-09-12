#include<bits/stdc++.h>
using namespace std;


void solve()
{
    int n,k;
    cin>>n>>k;

    string s;
    cin>>s;

    vector<int> freq(26,0);
    for(char ch : s)
    {
        freq[ch-'a']++;
    }

    int odd=0;

    for(int d : freq)
    {
        if(d%2)
        {
            odd++;
        }
    }

    int rem = n-k;

    int need;

    if(rem%2==0)
    {
        need = odd;
    }
    else
    {
        need = (odd > 0 ? odd -1 : 0);
    }

    if(need<=k)
    {
        cout<<"YES"<<"\n";
    }
    else
    {
        cout<<"NO"<<"\n";
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
