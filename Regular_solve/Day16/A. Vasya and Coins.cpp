#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;

    long long int sum=0,ans=0;
    for(int i=0; i<n; i++)
    {
        int a,b;
        cin>>a>>b;
        if(a==0 && b>0)
        {
            cout<<1<<endl;
        }
        else
        {
            sum = a + (b*2);
            cout<<sum+1<<endl;
        }

    }
}
