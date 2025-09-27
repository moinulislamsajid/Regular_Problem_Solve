#include<bits/stdc++.h>
using namespace std;

void solve()
{
    int n,m;
    cin>>n>>m;
    char ch[n][m];
   // vector<vector<string>> col(n, vector<string>(m));
    //vector<vector<string>> row(n, vector<string>(m));

    vector<char> row;
    vector<char> col;


    for(int i=0; i<n; i++)
    {
        for(int j=0; j<m; j++)
        {
            cin>>ch[i][j];
        }
    }

    for(int i=0; i<n; i++)
    {
        for(int j=0; j<m; j++)
        {
            if(i==n-1)
            {
                row.push_back(ch[i][j]);
            }
            else if(j==m-1)
            {
                col.push_back(ch[i][j]);
            }
        }


    }

    /*cout<<"\nRow : ";
    for(char ch : row)
    {
        cout<<ch;
    }

    cout<<"\nColumn : ";

    for(char ch : col)
    {
        cout<<ch;
    }*/

    int cnt=0;

    for(char ch : row)
    {
        if(ch=='D')
        {
            cnt++;
        }
    }
    for(char ch : col)
    {
        if(ch=='R')
        {
            cnt++;
        }
    }

    cout<<cnt<<endl;


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
