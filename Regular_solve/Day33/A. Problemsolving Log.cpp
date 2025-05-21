#include<bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin>>n;
    string s;
    cin>>s;

    vector<int> freq(26,0);

    for(char ch : s)
    {
        freq[ch-'A']++;
    }

    int sol=0;

    for(int i=0; i<26; i++)
    {
        int val = i+1;
        if(freq[i]>=val)
        {
            sol++;
        }
    }

    cout<<sol<<endl;
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
