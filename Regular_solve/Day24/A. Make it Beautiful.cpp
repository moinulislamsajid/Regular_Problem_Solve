#include<bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin>>n;

    vector<int> v(n);
    vector<int> check(n);
    vector<int> check1(n);
    for(int i=0; i<n; i++)
    {
        cin>>v[i];
        check[i]=v[i];
        check1[i]=v[i];
    }

    int cnt=0;
    sort(v.begin(),v.end());
    for(int i=1; i<n; i++)
    {
        if(v[i]==v[i-1])
        {
            cnt++;
        }
    }
    if(cnt==n-1)
    {
        cout<<"NO"<<endl;
        return;
    }

    sort(check.rbegin(),check.rend());
    sort(check1.begin(),check1.end());



   vector<int> ans;
   int l=0,m=0;
    for(int i=0; i<n; i++)
    {
        if(i%2==0)
        {
            ans.push_back(check[l]);
            l++;
        }
        else
        {
            ans.push_back(check1[m]);
            m++;
        }
    }

     cout<<"YES\n";
     for(int in : ans)
     {
         cout<<in<<" ";
     }
     cout<<endl;
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
