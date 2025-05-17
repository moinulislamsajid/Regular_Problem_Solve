#include<bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin>>n;

    if(n%7==0)
    {
        cout<<n<<endl;
        return;
    }

    if(n>=10 && n<=99)
    {

        int first = n/10;


        for(int i=0; i<=9; i++)
        {

            int num=first*10+i;

            if(num%7==0)
            {
                cout<<num<<endl;
                break;
            }

        }
    }
    else
    {
        int first = n/10;


        for(int i=0; i<=9; i++)
        {

            int num=first*10+i;

            if(num%7==0)
            {
                cout<<num<<endl;
                break;
            }

        }

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
