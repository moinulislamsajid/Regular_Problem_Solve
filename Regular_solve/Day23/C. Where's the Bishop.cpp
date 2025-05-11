#include<bits/stdc++.h>
using namespace std;

void solve()
{

        cout<<'\n';
        char ch[8][8];
        for(int i=1; i<=8; i++)
        {
            for(int j=1; j<=8; j++)
            {
                cin>>ch[i][j];
            }
        }

        for(int i=2; i<=7; i++)
        {
            for(int j=2; j<=7; j++)
            {
                if(ch[i][j]=='#' && ch[i-1][j-1]=='#' && ch[i-1][j+1]=='#' && ch[i+1][j-1]=='#' && ch[i+1][j+1]=='#')
                {
                    cout<<i<<" "<<j;
                    return;
                }
            }
        }

        //cout<<endl;
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
