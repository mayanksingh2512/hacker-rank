https://www.hackerrank.com/challenges/birthday-cake-candles/problem?isFullScreen=true&h_r=next-challenge&h_v=zen


#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int a[n];
    int max=0,count=0;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    for(int i=0;i<n;i++)
    {
     if(max<a[i])
     {
         max=a[i];
     }
    }
    for(int i=0;i<n;i++){
    if(a[i]==max)
    {
        count++;
    }}
    
    cout<<count;
}
