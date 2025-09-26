#include<bits/stdc++.h>
using namespace std;

void solve()
{
    string s;
    cin>>s;

    int one_c=0,zero_c=0;

     // for count the 0 and 1 using for each loop
    for(char ch : s)
    {
        if(ch=='0')
        {
            zero_c++;
        }
        else
        {
            one_c++;
        }
    }

    // to check no of zero or no of one is equal to size of n=2 or size of vector is 1
    if((zero_c==one_c && s.size()==2) || (s.size()==1))
    {
        cout<<0<<"\n";
    }

    // to check zero count is equal to the one count and size of vector is greater than 2
    else if(zero_c==one_c && s.size()>2)
    {
        cout<<zero_c-1<<"\n";
    }

    // print the minimum value from the one and zero count
    else
    {
        cout<<min(one_c,zero_c)<<"\n";
    }
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
