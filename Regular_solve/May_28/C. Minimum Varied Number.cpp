#include<bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin>>n;

    if(n>=1 && n<=9)
    {
        cout<<n<<'\n';
        return;
    }
    else if(n>=10 && n<=17)
    {
        int sum=9;


        for(int i=1; i<=8; i++)
        {
            sum+=i;
            if(sum==n)
            {
                cout<<i<<9<<endl;
                return;
            }
            else
            {
                sum=9;
            }
        }


    }
    else if(n>=18 && n<=24)
    {
        int sum=17;


        for(int i=1; i<=7; i++)
        {
            sum+=i;
            if(sum==n)
            {
                cout<<i<<8<<9<<endl;
                return;
            }
            else
            {
                sum=17;
            }
        }

    }
    else if(n>=25 && n<=30)
    {
        int sum=24;


        for(int i=1; i<=6; i++)
        {
            sum+=i;
            if(sum==n)
            {
                cout<<i<<7<<8<<9<<endl;
                return;
            }
            else
            {
                sum=24;
            }
        }

    }
    else if(n>=31 && n<=35)
    {
        int sum=30;


        for(int i=1; i<=5; i++)
        {
            sum+=i;
            if(sum==n)
            {
                cout<<i<<6<<7<<8<<9<<endl;
                return;
            }
            else
            {
                sum=30;
            }
        }

    }
    else if(n>=36 && n<=39)
    {
        int sum=35;


        for(int i=1; i<=4; i++)
        {
            sum+=i;
            if(sum==n)
            {
                cout<<i<<5<<6<<7<<8<<9<<endl;
                return;
            }
            else
            {
                sum=35;
            }
        }

    }

    else if(n>=40 && n<=42)
    {
        int sum=39;


        for(int i=1; i<=3; i++)
        {
            sum+=i;
            if(sum==n)
            {
                cout<<i<<4<<5<<6<<7<<8<<9<<endl;
                return;
            }
            else
            {
                sum=39;
            }
        }
    }
    else if(n>=43 && n<=44)
    {
        int sum=42;


        for(int i=1; i<=2; i++)
        {
            sum+=i;
            if(sum==n)
            {
                cout<<i<<3<<4<<5<<6<<7<<8<<9<<endl;
                return;
            }
            else
            {
                sum=42;
            }
        }
    }
    else
    {
        cout<<1<<2<<3<<4<<5<<6<<7<<8<<9<<endl;
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
