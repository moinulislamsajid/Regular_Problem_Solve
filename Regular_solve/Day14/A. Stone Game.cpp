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

    int mnPos=0,mxPos=0;
    int mnVal=INT_MAX,mxVal=INT_MIN;

    for(int i=0; i<n; i++)
    {
        if(v[i]>mxVal)
        {
            mxVal = v[i];
            mxPos = i;
        }

        if(v[i]<mnVal)
        {
            mnVal = v[i];
            mnPos = i;
        }
    }

    if(mnPos>mxPos)
    {
        swap(mnPos,mxPos);
    }

    int left = max(mnPos,mxPos)+1;
    int right = max(n - mnPos,n - mxPos);
    int over = (mnPos+1)+(n-mxPos);

    cout<<min({left,right,over})<<endl;
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
