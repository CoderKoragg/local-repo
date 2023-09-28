#include <iostream>
using namespace std;
int main() {
  int i,j,n=10,value,k=2,s=1;
  for(i=0;i<n;i++)
    {
      s=1;
      for(j=0;j<2*n-k;j++)
        {
          cout<<" ";
        }
      for(j=0;j<2*i+1;j++)
        {
          if(j%2==0)
          {
            cout<<s;
            s++;
          }
          else
          {
            cout<<" ";
          }
        }
      s--;
      for(j=0;j<2*i;j++)
        {
          
          if(j%2!=0)
          {
            s--;
            cout<<s;
          }
          else
            cout<<" ";
        }
      k+=2;
      cout<<endl;
    }
}