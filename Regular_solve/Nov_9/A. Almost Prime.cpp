#include<bits/stdc++.h>
using namespace std;

bool isPrime(int n)
{
    if(n <= 1) return false;
    for(int i = 2; i < n; i++)
    {
        if(n % i == 0) return false;
    }
    return true;
}


bool check(int n)
{
    vector<int> divisor;

    for(int i=2; i<n; i++)
    {
        if(n%i==0)
        {
            divisor.push_back(i);
        }
    }

    int cnt=0;
    for(int in : divisor)
    {
        if(isPrime(in))
        {
            cnt++;
        }
    }

    if(cnt==2)
    {
        return true;
    }

    return false;
}

int main()
{
    int n;
    cin>>n;
    int cnt=0;
    for(int i=6; i<=n; i++)
    {
        if(check(i))
        {
            cnt++;
        }
    }

    cout<<cnt<<'\n';
}
int main()
{
    int a=10;
    float b=50.5;
    char c=a+b;
    return 0;
}

E:\masm32\19_Sajid_Compiler_Design\lab4>flex LAB4.l
E:\masm32\19_Sajid_Compiler_Design\lab4>gcc lex.yy.c
