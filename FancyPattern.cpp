#include <iostream>
using namespace std;
int main() {
  int i,j,n=5;
  for(i=0;i<n;i++)
    {
      for(j=0;j<2*n-2-i;j++)
        {
          cout<<"*";
        }
      for(j=0;j<2*i+1;j++)
        {
          if(j%2==0)
          {
            cout<<i+1;
          }
          else
          {
            cout<<"*";
          }
        }
       for(j=0;j<2*n-2-i;j++)
        {
          cout<<"*";
        }
      
  cout<<endl;
}
}
  