#include<bits/stdc++.h>
using namespace std;

void solve()
{
    int s;
    cin>>s;

    int sum=0,cnt=0,crt=1;

    while(sum+crt<=s)
    {
        sum+=crt;
        cnt++;
        crt+=2;

        //cout<<sum<<endl;
    }

    //cout<<cnt<<endl;
    if(sum<s)
    {
        //cout<<"YES";
        cnt++;
    }

    cout<<cnt<<"\n";
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
