#include <iostream>
#include <string>
using namespace std;

int main() {
    
	 string a,b;
     
     cin>>a>>b;
     
     int c = a.size();
     int d = b.size();
          cout<<c<<" "<<d<<endl;
     
     string q=a+b;
     
        cout<<q<<endl;
      char c1= a[0];
      char c2= b[0];
      a[0]=c2;
      b[0]=c1;
      cout<<a<<" "<<b;
        return 0; 
}
