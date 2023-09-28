#include <iostream>
using namespace std;
int main() {
  int i,j,n=4,x=1;
  for(i=0;i<n;i++)
    {
      for(j=0;j<2*i+1;j++)
        {
          if(j%2==0)
          {
            cout<<x;
            x++;
          }
          else
          {
            cout<<"*";
          }
        }
      
      cout<<endl;
    }
  x--;
  for(i=0;i<n;i++)
    {
        for(j=0;j<(2*n)-(2*i+1);j++)
        {
          if(j%2==0)
          {
            cout<<x;
            x--;
          }
          else
          {
            cout<<"*";
          }
        }
      cout<<endl;
    }
  
}
  