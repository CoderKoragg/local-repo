#include <iostream>
using namespace std;
int main() {
  int i,j,n=5;
  for(i=0;i<n;i++)
    {
      for(j=0;j<2*i+1;j++)
        {
          if(j%2==0)
          {
            cout<<"*";
          }
          else
          {
            cout<<" ";
          }
        }
      
      cout<<endl;
    }
  for(i=0;i<n;i++)
    {
        for(j=0;j<(2*n)-(2*i+1)-2;j++)
        {
          if(j%2==0)
          {
            cout<<"*";
          }
          else
          {
            cout<<" ";
          }
        }
      cout<<endl;
    }
  
}
  