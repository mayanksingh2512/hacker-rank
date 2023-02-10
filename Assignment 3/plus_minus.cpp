#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,i;
    cin>>n;
    int a[n];
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    float count1=0;
    float count2=0;
    float count3=0;
    for(i=0;i<n;i++)
    {
        if(a[i]>0)
        {
            count1++;
        }
        if(a[i]<0)
        {
            count2++;
        }
        if(a[i]==0)
        {
            count3++;
        }
    }
    cout<<setprecision(6);
    cout<<count1/n<<endl;
    cout<<setprecision(6);
    cout<<count2/n<<endl;
    cout<<setprecision(6);
    cout<<count3/n<<endl;
}
