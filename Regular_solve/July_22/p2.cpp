#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;

    vector<int>arr(n - 1);
    for(int i=0; i<n - 1; i++)
    {
        cin>>arr[i];
    }


    vector<bool> pre(n + 1, false);


    for (int i=0; i<n-1; i++)
    {
        pre[arr[i]]=true;
    }


    for(int i= 1; i<=n; i++)
    {
        if (!pre[i])
        {
            cout<<i<<endl;
            break;
        }
    }


}
