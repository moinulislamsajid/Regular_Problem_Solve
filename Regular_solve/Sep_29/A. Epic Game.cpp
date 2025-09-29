#include<bits/stdc++.h>
using namespace std;

void solve()
{
    int a,b,n;
    cin>>a>>b>>n;

    //cout<<__gcd(a,n)<<endl;

    int rem=n,i=0;

    bool sw=false,asw=false;

    while(true)
    {
        if(i%2==0)
        {
            i++;

            int gcd = __gcd(a,rem);
            // 3
            rem=rem-gcd;
            if(rem==0)
            {
                asw=true;
                break;
            }
        }
        else
        {
            i++;

            int gcd = __gcd(b,rem);
            // 3
            rem=rem-gcd;
            if(rem==0)
            {
                sw=true;
                break;
            }
        }
    }

    if(sw)
    {
        cout<<1<<"\n";
    }

    if(asw)
    {
        cout<<0<<"\n";
    }

}

int main()
{
    solve();
}
