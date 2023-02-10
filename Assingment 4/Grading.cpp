#include <bits/stdc++.h>
using namespace std;

int main()
{
int n,i;
cin>> n;
int grade[n];
for(i=0;i<n;i++)
{
    cin>>grade[i];
}    
for(i=0;i<n;i++)
{
    if(grade[i]<38)
    {
        cout<<grade[i]<<endl;
    }
    if(grade[i]>=38)
    {
        int d=grade[i]/5;
        int r=d+1;
        int s=r*5;
        if(s-grade[i]<3)
        {
            cout<<s<<endl;
        }
        else 
        {
            cout<<grade[i]<<endl;
        }
    }
}
}
