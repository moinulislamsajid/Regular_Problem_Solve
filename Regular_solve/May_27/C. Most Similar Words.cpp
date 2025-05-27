#include<bits/stdc++.h>
using namespace std;


int calValue(char ch1,char ch2)
{
    string alpha = "abcdefghijklmnopqrstuvwxyz";
    int res1=0,res2=0;

    for(int i=0; i<alpha.size(); i++)
    {
        if(alpha[i]==ch1)
        {
            res1=i;
        }
        else if(alpha[i]==ch2)
        {
            res2=i;
        }
    }

    int mi = abs(res2-res1);

    return mi;

}
void solve()
{
    int n,m;
    cin>>n>>m;

    vector<string> v(n);
    for(int i=0; i<n; i++)
    {
        string d;
        cin>>d;
        v[i]=d;
    }

    int res=0;
    int ans = INT_MAX;



    //cout<<"CECHK GT 2"<<endl;
        for(int i=0; i<n-1; i++)
        {
            string s = v[i];


            for(int j=i+1; j<n; j++)
            {
                string ss = v[j];

                for(int k=0; k<m; k++)
                {
                    if(s[k]==ss[k])
                    {
                        res+=0;
                    }
                    else
                    {
                        int val = calValue(s[k],ss[k]);
                        res+=val;
                    }
                }

                ans=min(ans,res);
                res=0;

            }
        }


        cout<<ans<<endl;
        return;

    }
    /*else
    {

        string s = v[0];
        string ss = v[1];
        for(int i=0; i<m; i++)
        {
            if(s[i]==ss[i])
            {
                res+=0;
            }
            else
            {
                int val = calValue(s[i],ss[i]);
                res+=val;
            }
        }

    }

    cout<<res<<endl;*/



int main()
{
    int t;
    cin>>t;

    while(t--)
    {

        solve();
    }
}
