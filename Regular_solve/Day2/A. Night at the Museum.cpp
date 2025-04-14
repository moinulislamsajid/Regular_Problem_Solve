#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin>>s;

    char current = 'a';
    int minrol = 0;

    for(char ch : s)
    {
        int diff = abs(current - ch);
        minrol+=min(diff,26-diff);
        current=ch;
    }

    cout<<minrol<<endl;
}
