#include<bits/stdc++.h>
using namespace std;


void solve()
{
    int arr[3][3];
    int arr1[3][3];

    for(int i=0; i<3; i++)
    {
        for(int j=0; j<3; j++)
        {
            cin>>arr[i][j];
        }
    }


    int sum1=0;

    sum1+=arr[0][0];
    sum1+=arr[0][1];
    sum1+=arr[1][0];

    if(sum1%2==0)
    {
        arr1[0][0]=1;
    }
    else
    {
        arr1[0][0]=0;
    }

    //cout<<arr[0][0]<<endl;

    int sum2=0;

    sum2+=arr[1][0];
    sum2+=arr[0][0];
    sum2+=arr[2][0];
    sum2+=arr[1][1];

    if(sum2%2==0)
    {
        arr1[1][0]=1;
    }
    else
    {
        arr1[1][0]=0;
    }
    int sum3=0;

    sum3+=arr[2][0];
    sum3+=arr[2][1];
    sum3+=arr[1][0];

    if(sum3%2==0)
    {
        arr1[2][0]=1;
    }
    else
    {
        arr1[2][0]=0;
    }
    int sum4=0;

    //cout<<arr[0][0]<<endl;
    sum4+=arr[0][0];
    sum4+=arr[0][1];
    sum4+=arr[1][1];
    sum4+=arr[0][2];

    //cout<<sum4<<endl;
    if(sum4%2==0)
    {
        arr1[0][1]=1;
    }
    else
    {
        arr1[0][1]=0;
    }

    int sum5=0;

    sum5+=arr[1][1];
    sum5+=arr[0][1];
    sum5+=arr[1][0];
    sum5+=arr[2][1];
    sum5+=arr[1][2];

    if(sum5%2==0)
    {
        arr1[1][1]=1;
    }
    else
    {
        arr1[1][1]=0;
    }
    int sum6=0;

    sum6+=arr[1][1];
    sum6+=arr[2][1];
    sum6+=arr[2][0];
    sum6+=arr[2][2];

    if(sum6%2==0)
    {
        arr1[2][1]=1;
    }
    else
    {
        arr1[2][1]=0;
    }
    int sum7=0;

    sum7+=arr[0][2];
    sum7+=arr[0][1];
    sum7+=arr[1][2];

    if(sum7%2==0)
    {
        arr1[0][2]=1;
    }
    else
    {
        arr1[0][2]=0;
    }

    int sum8=0;

    sum8+=arr[0][2];
    sum8+=arr[1][1];
    sum8+=arr[1][2];
    sum8+=arr[2][2];

    if(sum8%2==0)
    {
        arr1[1][2]=1;
    }
    else
    {
        arr1[1][2]=0;
    }


    int sum9=0;

    sum9+=arr[2][2];
    sum9+=arr[2][1];
    sum9+=arr[1][2];

    if(sum9%2==0)
    {
        arr1[2][2]=1;
    }
    else
    {
        arr1[2][2]=0;
    }

    for(int i=0; i<3; i++)
    {
        for(int j=0; j<3; j++)
        {
            cout<<arr1[i][j];
        }
        cout<<endl;
    }
}

int main()
{
    solve();
}
