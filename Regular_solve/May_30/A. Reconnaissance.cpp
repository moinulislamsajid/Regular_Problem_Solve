#include<bits/stdc++.h>
using namespace std;


int main()
{
    int n;
    cin>>n;

     vector<int> v(n);
     for(int i=0; i<n; i++)
     {
         cin>>v[i];
     }

     int mn = INT_MAX;

     int dd = abs(v[0]-v[n-1]);
     int fst=0,lst=0;
     for(int i=1; i<n; i++)
     {
         int d = abs(v[i]-v[i-1]);

         if(d<mn)
         {
             mn=d;
             fst=i-1;
             lst=i;

         }
     }

     if(dd<mn)
     {
         cout<<1<<" "<<n<<endl;
     }
     else
     {
       cout<<fst+1<<" "<<lst+1<<endl;
     }
}
