#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s,t;
    cin>>s;
    cin>>t;

    int cnt=0;

    int j=0;
    int i=0;
    int pos=0;
    while(t[i]!='\0')
    {
        if(s[j]==t[i])
        {
            cnt++;
            j++;
            i++;
        }
        else
        {
            i++;
        }
    }

    cout<<cnt<<endl;
}
