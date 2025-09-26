#include<bits/stdc++.h>
using namespace std;


int main()
{
    int n;
    cin>>n;

    vector<int> v(n);
    for(int i=0; i<n; i++)
    {
        cin>>v[i];
    }

    unordered_set<int> st;
    vector<int> res;

    for(int i=n-1; i>=0; i--)
    {
        if(st.find(v[i])==st.end())
        {
            st.insert(v[i]);
            res.push_back(v[i]);
        }
    }

    reverse(res.begin(),res.end());

    cout<<res.size()<<"\n";
    for(int in : res)
    {
        cout<<in<<" ";
    }
    cout<<"\n";
}
