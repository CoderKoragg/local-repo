#include <iostream>
using namespace std;
int main() {
  int i,j,n=5,x=1;
  for(i=0;i<n;i++)
    {
      for(j=0;j<i+1;j++)
        {
          cout<<"*"<<" ";
        }
      for(j=0;j<2*n-2*i-2;j++)
        {
          cout<<" "<<" "; 
        }
       for(j=0;j<i+1;j++)
        {
          cout<<"*"<<" ";
        }
      cout<<endl;
    }
   for(i=0;i<n;i++)
    {
      for(j=0;j<n-i;j++)
        {
          cout<<"*"<<" ";
        }
      for(j=0;j<2*i;j++)
        {
          cout<<" "<<" ";
        }
       for(j=0;j<n-i;j++)
        {
          cout<<"*"<<" ";
        }
      cout<<endl;
    }
}
  