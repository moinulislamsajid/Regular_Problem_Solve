#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;

    while(t--)
    {
        string s;
        cin>>s;

        char ch = s[0];
        char ch1 = s[1];
        // cout<<ch<<endl;

        int num = (int) (ch1);
        int finum = num-48;
        //cout<<finum<<endl;


            for(int i=1; i<=8; i++)
            {
                if(i==finum)
                {
                    continue;
                }
                cout<<ch<<i<<endl;
            }


            for(char i='a'; i<='h'; i++)
            {
                if(i==ch)
                {
                    continue;
                }
                cout<<i<<finum<<endl;

            }

    }
}
