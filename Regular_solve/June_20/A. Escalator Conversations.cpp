#include<bits/stdc++.h>
#define ll long long int
using namespace std;

void solve()
{
     ll n,m,k,h;
     cin>>n>>m>>k>>h;

     vector<ll> v(n);
     vector<ll> holdManHeight;
     vector<ll> holdManDiff;
     for(int i=0; i<n; i++)
     {
         cin>>v[i];
     }

     for(int i=1; i<=m-1; i++)
     {
         ll manHeight = i*k;
         holdManHeight.push_back(manHeight);

     }

     for(int i=0; i<n; i++)
     {
         ll manDiff = abs(h-v[i]);
         holdManDiff.push_back(manDiff);
     }

     /*cout<<"Abstract Difference Height : ";
     for(ll in : holdManDiff)
     {
         cout<<in<<" ";
     }
     cout<<endl;

     cout<<"Standing Height : ";
     for(ll in : holdManHeight)
     {
         cout<<in<<" ";
     }
     cout<<endl;*/


     sort(holdManDiff.begin(),holdManDiff.end());

     ll cnt =0;

     for(int i=0; i<holdManHeight.size(); i++)
     {
         for(int j=0; j<n; j++)
         {
             if(holdManHeight[i]==holdManDiff[j])
             {
                 cnt++;
             }
         }
     }


     cout<<cnt<<'\n';
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
