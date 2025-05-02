#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    string s;
    cin>>s;
    int mx = INT_MIN;
    int cnt=1,cnt11=0;
    int res=0;
    int pos=0;
    bool ok = false;

    for(int i=0; i<n; i++)
    {
        if(s[i]=='x')
        {
            cnt11++;
        }
    }

    if(cnt11==n)
    {
        cout<<n-2<<endl;
        return 0;
    }


    for(int i=0; i<n; i++)
    {

        if(s[i]=='x')
        {

            for(int j=i+1; j<=n; j++)
            {
                if(s[i]==s[j])
                {
                    cnt++;

                }
                else
                {
                    i=j;
                    break;
                }
            }


            mx = max(cnt,mx);
           // cout<<mx<<endl;
            if(mx>2)
            {
                res+=mx-2;
            }
            mx=INT_MIN;
            cnt=1;

        }





    }






        cout<<res<<endl;


}
