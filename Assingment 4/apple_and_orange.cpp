#include <bits/stdc++.h>
using namespace std;
int main()
{
    int s,t;
    cin>>s>>t;
    int a,b;
    cin>>a>>b;
    int m,n;
    cin>>m>>n;
    int apple[m],orange[n];
    int i,j;
    
    for(i=0;i<m;i++)
    {
        cin>>apple[i];
    }
    for(j=0;j<n;j++)
    {
        cin>>orange[j];
    }
    int sum1=0;
    int count1=0;
    for(i=0;i<m;i++)
    {
        sum1=a+apple[i];
        if(sum1>=s && sum1<=t)
        {
            count1++;
        }
        sum1=0;
    }
    
    int sum2=0;
    int count2=0;
     for(j=0;j<n;j++)
    {
        sum2=b+orange[j];
        if(sum2>=s && sum2<=t)
        {
            count2++;
        }
        sum2=0;
    }
    cout<<count1<<endl;
    cout<<count2<<endl;
    
}
