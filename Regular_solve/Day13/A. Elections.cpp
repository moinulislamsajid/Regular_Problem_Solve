#include<bits/stdc++.h>
#define ll long long int
using namespace std;

int solve(int best,int other,int other1)
{
    return max(0,max(other,other1)+1 - best);
}

int main()
{

    int t;
    cin>>t;

    while(t--)
    {
        ll a,b,c;
        cin>>a>>b>>c;

        cout<<solve(a,b,c)<<" "<<solve(b,a,c)<<" "<<solve(c,a,b)<<'\n';
    }

}
