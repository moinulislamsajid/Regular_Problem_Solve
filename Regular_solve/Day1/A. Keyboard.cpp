#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s="qwertyuiopasdfghjkl;zxcvbnm,./";
    char ch;
    cin>>ch;

    string s1;
    cin>>s1;

    string ans="";

    if(ch=='R')
    {
        for(int i=0; i<s1.size(); i++)
        {
            for(int j=0; j<s.size(); j++)
            {
                if(s1[i]==s[j])
                {
                    ans.push_back(s[j-1]);
                }
            }
        }
    }
    else
    {
        for(int i=0; i<s1.size(); i++)
        {
            for(int j=0; j<s.size(); j++)
            {
                if(s1[i]==s[j])
                {
                    ans.push_back(s[j+1]);
                }
            }
        }

    }

    cout<<ans<<endl;
}
