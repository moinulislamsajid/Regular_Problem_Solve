#include<bits/stdc++.h>
using namespace std;


void solve()
{
    int n;
    cin>>n;
    string s;
    cin>>s;

    if((s[0]!='m' && s[0]!='M') || (s[n-1] !='w' && s[n-1] != 'W'))
    {
        cout<<"NO\n";

        return;
    }

    bool m=false,e=false,o=false,w=false;

    int o_pos=0,e_pos=0,w_pos=0,m_pos=0;
    vector<int> v;
    for(int i=0; i<n; i++)
    {
        if((s[i]=='m' || s[i]=='M') && !m)
        {
            m_pos==i;
            m=true;
        }
        else if((s[i]=='e' || s[i]=='E') && !e)
        {
            e_pos=i;
            e=true;
        }
        else if((s[i]=='o' || s[i]=='O') && !o)
        {
            o_pos=i;
            o=true;
        }
        else if((s[i]=='w' || s[i]=='W') && !w)
        {
            w_pos=i;
            w=true;
        }

    }

      cout<<m_pos<<" "<<e_pos<<" "<<o_pos<<" "<<w_pos<<endl;


      if((m_pos>e_pos || o_pos>w_pos) || (e_pos>o_pos))
      {
          cout<<"NO\n";
          return;
      }

      bool check=false;

       for(int i=0; i<n; i++)
       {
           if(s[i]=='e' || s[i]=='E')
           {
               int j=i+1;

               while(true)
               {
                   if(s[j]=='m' || s[j]=='M')
                   {
                       check=true;
                       break;
                   }
                   if(s[j]=='\0')
                   {
                       break;
                   }
                   j++;
               }
           }

           else if(s[i]=='o' || s[i]=='O')
           {
                int j=i+1;

               while(true)
               {
                   if(s[j]=='e' || s[j]=='E')
                   {
                       check=true;
                       break;
                   }
                   if(s[j]=='\0')
                   {
                       break;
                   }
                   j++;
               }
           }
           else if(s[i]=='w' || s[i]=='W')
           {
                int j=i+1;

               while(true)
               {
                   if(s[j]=='o' || s[j]=='O')
                   {
                       check=true;
                       break;
                   }
                   if(s[j]=='\0')
                   {
                       break;
                   }
                   j++;
               }
           }
       }


       if(check)
       {
           cout<<"NO\n";
           return;
       }




       for(int i=m_pos; i<w_pos; i++)
       {
           if(s[i]=='m' || s[i]=='M' || s[i]=='e' || s[i]=='E' || s[i]=='o' || s[i]=='O' || s[i]=='w' || s[i]=='W')
           {
                continue;


           }
           else
           {
                cout<<"NO\n";
                return;
           }

       }

    string target = "meow";
    int cnt=0;

    for(int i=0; i<n; i++)
    {
        bool ok=false;
        char ch = tolower(s[i]);
        if(ch==target[cnt])
        {
            ok=true;
        }

        if(ok)
        {
            cnt++;

            if(cnt==4)
            {
                break;
            }
        }
    }

    if(cnt==4)
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

int main()
{
    int t;
    cin>>t;

    while(t--)
    {
        solve();
    }
}
