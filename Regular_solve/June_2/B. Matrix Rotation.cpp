#include<bits/stdc++.h>
using namespace std;


bool isbeaty(int num[2][2])
{
    return num[0][0]<num[0][1] && num[1][0] < num[1][1] && num[0][0] < num[1][0] && num[0][1] < num[1][1];
}

void rotate90(int num[2][2])
{
    int temp = num[0][0];
    num[0][0] =  num[1][0];
    num[1][0] = num[1][1];
    num[1][1] = num[0][1];
    num[0][1] = temp;
}


void solve()
{
    int num[2][2];

        for(int i=0; i<2; i++)
        {
            for(int j=0; j<2; j++)
            {
                cin>>num[i][j];
            }
        }

        for(int i=0; i<4; i++)
        {
            if(isbeaty(num))
            {
                cout<<"YES\n";
                return;
            }

            rotate90(num);
        }

        cout<<"NO\n";
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
