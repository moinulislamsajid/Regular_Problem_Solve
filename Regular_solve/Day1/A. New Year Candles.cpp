#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a,b;
    cin>>a>>b;

    int hours=a;
    int bourned = a;

    while(bourned>=b)
    {
        int last = bourned/b;
        hours+=last;
        bourned = last+(bourned%b);
    }

    cout<<hours<<endl;
}
