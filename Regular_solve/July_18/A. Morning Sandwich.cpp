#include<bits/stdc++.h>
using namespace std;

void solve()
{
    int b,c,h;
    cin>>b>>c>>h;

    int B=b,C=c,H=h;
    int bb=0,cc=0,hh=0,cm=0,cm2=0;
    bool check=false;

    while(true)
    {

       // bb++;
        B--;

        if(B==0)
        {
            break;
        }

        if(C>0)
        {
            cc++;
            C--;
            if(B!=0)
            {
                bb++;
                B--;
            }

        }

        if(H>0)
        {
            hh++;
            H--;
            if(B!=0)
            {
                bb++;
                B--;
            }

        }



        if(C==0 && H==0)
        {
            break;
        }




    }

    cout<<bb<<" "<<cc<<" "<<hh<<endl;
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
