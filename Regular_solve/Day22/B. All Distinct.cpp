#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;

    while(t--)
    {
        int n;
        cin>>n;

        vector<int> v(n);
        set<int> st;
        for(int i=0; i<n; i++)
        {
            int x;
            cin>>x;
            st.insert(x);
        }

        if((n-st.size())%2==0)
        {
            cout<<st.size()<<endl;
        }
        else
        {
            cout<<st.size()-1<<endl;
        }
    }
}
