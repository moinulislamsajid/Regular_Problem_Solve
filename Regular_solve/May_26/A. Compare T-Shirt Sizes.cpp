#include<bits/stdc++.h>
using namespace std;

void solve()
{
    string a,b;
    cin>>a>>b;

    if(a==b)
    {
        cout<<'='<<'\n';
        return;
    }
    int x_a=0,x_b=0;

    for(int i=0; i<a.size(); i++)
    {
        if(a[i]=='X')
        {
            x_a++;
        }
    }
    for(int i=0; i<b.size(); i++)
    {
        if(b[i]=='X')
        {
            x_b++;
        }
    }

    int  lenA = a.size();
    int  lenB = b.size();
    char lastA = a[lenA-1];
    char lastB = b[lenB-1];

    if(lastA=='S' && (lastA!=lastB))
    {
        cout<<'<'<<'\n';
        return;
    }
    else if(lastB=='S' && (lastA!=lastB))
    {
        cout<<'>'<<'\n';
        return;
    }


    if(lastA==lastB)
    {
        if(lastA=='L')
        {
            if(x_a>x_b)
            {
                cout<<'>'<<'\n';
                return;
            }
            else
            {
                cout<<'<'<<'\n';
                return;
            }
        }
        else if(lastA=='M')
        {


            if(x_a>x_b)
            {
                cout<<'<'<<'\n';
                return;
            }
            else
            {
                cout<<'>'<<'\n';
                return;
            }

        }
        else if(lastA=='S')
        {
            if(x_a>x_b)
            {
                cout<<'<'<<'\n';
                return;
            }
            else
            {
                cout<<'>'<<'\n';
                return;
            }
        }
    }
    else
    {
        if(lastA=='L')
        {
            cout<<'>'<<'\n';
            return;
        }
        else
        {
            cout<<'<'<<'\n';
            return;
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
