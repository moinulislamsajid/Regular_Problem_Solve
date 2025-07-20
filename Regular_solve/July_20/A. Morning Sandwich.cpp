#include<bits/stdc++.h>
using namespace std;

void solve()
{
    int b,c,d;
    cin>>b>>c>>d;

    int B=b,C=c,D=d;
    bool check=false,check1=false;

    int bb=0,cc=0,dd=0;

    while(true)
    {
        bb++;
        B--;
        if(B==0)
        {
            break;
        }

        if(C!=0)
        {
            cc++;
            C--;
        }
        else
        {
            check=true;
        }

        if(check && D!=0)
        {
            dd++;
            D--;
        }

        if(C==0 && D==0)
        {
            check1=true;
            break;
        }

    }

   // cout<<bb<<" "<<cc<<" "<<dd<<endl;
   if(check1)
   {
       dd+=1;
   }
    cout<<bb+cc+dd<<endl;
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
