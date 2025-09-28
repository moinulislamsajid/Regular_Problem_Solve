#include<bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin>>n;

    vector<int> v(n);
    for(int i=0; i<n; i++)
    {
        cin>>v[i];
    }

    vector<int> temp;

    for(int i=0; i<=9; i++)
    {
        auto it = find(v.begin(),v.end(),i);

        if(it!=v.end())
        {
            continue;
        }else
        {
            temp.push_back(i);
        }
    }

    /*for(int in : temp)
    {
        cout<<in<<" ";
    }*/


    int sz = temp.size();

    if(sz==2)
    {
        cout<<6<<"\n";
    }
    else if(sz==3)
    {
        cout<<18<<"\n";
    }
    else if(sz==4)
    {
        cout<<36<<"\n";
    }
    else if(sz==5)
    {
        cout<<60<<"\n";
    }
    else if(sz==6)
    {
        cout<<90<<"\n";
    }
    else if(sz==7)
    {
        cout<<126<<"\n";
    }
    else if(sz==8)
    {
        cout<<168<<"\n";
    }
    else if(sz==9)
    {
        cout<<216<<"\n";
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
