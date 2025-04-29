#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,k;
    cin>>n>>k;

    long long int cnt=0;
    long long int sum=k;

    while(n--)
    {
        char ch;int x;
        cin>>ch>>x;



        if(ch=='+')
        {
            sum+=x;
        }
        else
        {
           if(sum>x || sum==x)
           {
               sum-=x;
           }
           else
           {
               cnt++;
           }
        }


    }

    cout<<sum<<" "<<cnt<<endl;
}
