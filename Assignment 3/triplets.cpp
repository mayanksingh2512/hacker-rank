#include <bits/stdc++.h>

using namespace std;
int main()
{

    int a[3],b[3],i,j;
    cin>>a[0]>>a[1]>>a[2];
    cin>>b[0]>>b[1]>>b[2];
    int count1 = 0;
    int count2 = 0;
    for(i=0;i<=2;i++)
    {
       if(a[i]>b[i])
        {    
            count1++;
        }
        else if(a[i]<b[i])
        {
            count2++;
        }
    }
    
    cout<<count1<<" "<<count2;


}
