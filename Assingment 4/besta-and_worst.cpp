#include <iostream>

using namespace std;

int main()
{
  int s,t,a,b,m,n;
  int u=0,p=0;
  int k,z;
  cin>>s>>t>>a>>b>>m>>n;
  int arr[m];
  int orr[n];
  for(int i=0;i<m;i++)
  {
      cin>>arr[i];
  }
  for(int i=0;i<n;i++)
  {
      cin>>orr[i];
  }
  for(int i=0;i<m;i++)
  {
      k=arr[i]+a;
      if(k>=s&&k<=t)
      u++;
  }
  for(int i=0;i<n;i++)
  {
      z=orr[i]+b;
      if(z>=s&&z<=t)
      p++;
  }
  cout<<u<<endl;
  cout<<p;
  
}
