#include <bits/stdc++.h>

using namespace std;
int main()
{
    int sum=0,sum2=0;
    int res;
    int n;
    cin>>n;
    int a[n][n],i,j;
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            cin>>a[i][j];
        }
    }
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            if(i==j)
            {
                sum=sum+a[i][j];
            }
            if(i+j==n-1)
            {
                sum2=sum2+a[i][j];
            }
        }
    }
    
    cout<<abs(sum-sum2);
    return 0;
}
