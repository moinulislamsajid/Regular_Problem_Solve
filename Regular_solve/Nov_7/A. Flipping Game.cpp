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

    int one=0;

    for(int in : v)
    {
        if(in==1)
        {
            one++;
        }

    }

    int maxgain=INT_MIN;
    int currgain=0;

    for(int i=0; i<n; i++)
    {
       int val = (v[i]==0) ? 1 : -1;

       currgain = max(val,currgain+val);
       maxgain = max(currgain,maxgain);
    }

    if(one==n)
    {
        cout<<n-1<<'\n';
    }
    else
    {
        cout<<one+maxgain<<'\n';
    }
}



int main()
{
    solve();
}
