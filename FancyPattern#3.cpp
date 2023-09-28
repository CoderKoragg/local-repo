#include <iostream>
using namespace std;
int main() {
  int i,j,n=4,x=1;
  for(i=0;i<n;i++)
    {
      x=1;
      for(j=0;j<2*i+1;j++)
        {
          if(j==0)
          {
            cout<<"*";
          }
          else
          {
            if(j%2==0)
            {
              cout<<x;
              x++;
            }
            else{
              cout<<" ";
            }
          }
        }
      x--;
      for(j=0;j<2*i;j++)
        {
          if(j==2*i-1)
          {
            cout<<"*";
          }
          else
          {
          if(j%2!=0)
          {
            x--;
            cout<<x;
          }
          else
          {
            cout<<" ";
          }
        }
        }
      cout<<endl;
    }
  for(i=0;i<n-1;i++)
    {
      x=1;
      for(j=0;j<(2*(n-1))-(2*i+1);j++)
        {
          if(j==0)
          {
            cout<<"*";
          }
          else
          {
            if(j%2==0)
            {
              cout<<x;
              x++;
            }
            else{
              cout<<" ";
            }
          }
        }
      x--;
      for(j=0;j<2*(n-2)-2*i;j++)
        {
          if(j==2*(n-2)-2*i-1)
          {
            cout<<"*";
          }
          else
          {
          if(j%2!=0)
          {
            x--;
            cout<<x;
          }
          else
          {
            cout<<" ";
          }
        }
        }
      cout<<endl;
    }
  
}
  