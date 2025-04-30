#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;

    while(t--)
    {
        string Str,keyStr;
        cin>>Str>>keyStr;

        map<char,int> mp;

        for(int i=0; i<26; i++)
        {
            mp[Str[i]]=i;
        }

        /*for(auto it : mp)
        {
            cout<<it.first<<" "<<it.second<<endl;
        }*/

        int res=0;
        for(int i=1; i<keyStr.size(); i++)
        {
            res+=abs(mp[keyStr[i]]-mp[keyStr[i-1]]);
        }

        cout<<res<<endl;
    }
}
