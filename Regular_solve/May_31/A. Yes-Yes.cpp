#include<bits/stdc++.h>
using namespace std;

int main()
{

    string target = "";
    for(int i=0; i<18; i++)
    {
        target+="Yes";
    }
    int t;
    cin>>t;

    while(t--)
    {
        string s;
        cin>>s;

        if(target.find(s)!= string::npos)
        {
            cout<<"YES\n";
        }
        else
        {
            cout<<"NO\n";
        }
    }
}
