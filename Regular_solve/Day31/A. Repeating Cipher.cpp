#include<bits/stdc++.h>
using namespace std;

 void solve()
 {
     int n;
     cin>>n;

     string s;
     cin>>s;

     if(n==1)
     {
         cout<<s[0]<<endl;
         return;
     }
     else if(n==3)
     {
         cout<<s[0]<<s[1]<<endl;
         return;
     }
     else if(n==6)
     {
         cout<<s[0]<<s[1]<<s[3]<<endl;
         return;
     }
     else if(n==10)
     {
         cout<<s[0]<<s[1]<<s[3]<<s[6]<<endl;
         return;
     }
     else if(n==15)
     {
         cout<<s[0]<<s[1]<<s[3]<<s[6]<<s[10]<<endl;
         return;
     }
     else if(n==21)
     {
         cout<<s[0]<<s[1]<<s[3]<<s[6]<<s[10]<<s[15]<<endl;
         return;
     }
     else if(n==28)
     {
         cout<<s[0]<<s[1]<<s[3]<<s[6]<<s[10]<<s[15]<<s[21]<<endl;
         return;
     }
     else if(n==36)
     {
         cout<<s[0]<<s[1]<<s[3]<<s[6]<<s[10]<<s[15]<<s[21]<<s[28]<<endl;
         return;
     }
     else if(n==45)
     {
         cout<<s[0]<<s[1]<<s[3]<<s[6]<<s[10]<<s[15]<<s[21]<<s[28]<<s[36]<<endl;
         return;
     }
     else if(n==55)
     {
         cout<<s[0]<<s[1]<<s[3]<<s[6]<<s[10]<<s[15]<<s[21]<<s[28]<<s[36]<<s[37]<<endl;
         return;
     }

 }


 //cooooonnnnttttteeeeeeeeeeeeessssssssttttttttttttttttttt

int main()
{
    solve();
}
