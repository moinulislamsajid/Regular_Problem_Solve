#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;

    while(t--)
    {
        int a,b,c,d;
        cin>>a>>b>>c>>d;

        int x = min(a,b);
        int y = max(b,c);
        int z = min(c,d);

        cout<<x<<" "<<y<<" "<<z<<endl;
    }
}
