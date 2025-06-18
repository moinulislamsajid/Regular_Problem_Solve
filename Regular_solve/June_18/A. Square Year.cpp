#include<bits/stdc++.h>
using namespace std;

void solve()
{
    int number;
    cin>>number;

    double sqrtNumber = (double)sqrt(number);
    //cout<<check<<endl;

    if(sqrtNumber==(int)sqrtNumber)
    {
        if((int)sqrtNumber%2==0)
        {
            //int divNumber = sqrtNumber/2;
            cout<<sqrtNumber/2<<" "<<sqrtNumber/2<<'\n';
        }
        else
        {
            cout<<sqrtNumber-1<<" "<<1<<'\n';
        }
    }
    else
    {
        cout<<-1<<'\n';
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
