#include<bits/stdc++.h>
using namespace std;

void solve()
{
    string s;
    cin>>s;

    if(s.size()<=3)
    {
        cout<<"NO\n";
        return;
    }

    if(s.size()==4)
    {
        if(s=="ABBA"|| s=="BAAB")
        {
            cout<<"YES\n";
            return;
        }
        else
        {
            cout<<"NO\n";
            return;
        }
    }

    vector<int> indx;

    int sz = s.size();

    bool check1=false,check2=false;
    //cout<<"check 1"<<endl;
    for(int i=0; i<sz-1; i++)
    {
        string ss = s.substr(i,2);

        if(ss=="AB")
        {
            check1=true;
            indx.push_back(i+1);
        }

        if(ss=="BA")
        {
            //cout<<"Hello this is BA";
            check2=true;
            indx.push_back(i);
        }
    }

    if(indx.size()<=1)
    {
        cout<<"NO\n";
        return;
    }

    if(indx.size()==2)
    {
        if(indx[0]==indx[1])
        {
            cout<<"NO\n";
            return;
        }
    }



    if(check1 && check2)
    {
        for(int i=0; i<indx.size()-1; i++)
        {
            int diff = abs(indx[i]+indx[i+1]);
            if(diff>=2)
            {

                if(indx[i+1]==3 && indx[i]==1)
                {
                    cout<<"NO\n";
                    return;
                }
                cout<<"YES\n";
                return;
            }
        }


    }


    cout<<"NO\n";


}

int main()
{
    solve();
}
