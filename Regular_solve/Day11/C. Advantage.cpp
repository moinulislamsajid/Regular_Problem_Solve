#include<bits/stdc++.h>
using namespace std;

void  solve()
{
    long long int n;
    cin>>n;

    vector<long long int> v(n);
    vector<long long int> v1(n);
    for(int i=0; i<n; i++)
    {
        cin>>v[i];
        v1[i]=v[i];
    }


    sort(v1.rbegin(),v1.rend());

    vector<long long int> ans;
    //int j=0;
    for(int i=0; i<n; i++)
    {
        if(v[i]==v1[0])
        {
            long long int diff = v[i]-v1[1];
            ans.push_back(diff);
        }
        else
        {
            long long int diff = v[i]-v1[0];
            ans.push_back(diff);
        }

    }

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
