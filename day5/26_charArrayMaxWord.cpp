//finding the maximum word in the give string

#include<iostream>
#include<limits.h>
using namespace std;

int main()
{
  char a[100];
  cin.getline(a,100);
  cout<<a<<endl;


  int maxlength=INT_MIN;

  int sum=0;
  int i=0;
    int maxst=0;
    int st=0;
  while(1){


      if( a[i] == '\0' || a[i]== ' ' )
      {
           if(maxlength < sum)
           {
               maxlength=sum;
               maxst=st;
           }
           st=i+1;
          sum=0;
      }
      else
      sum++;
      if( a[i] == '\0')
      {
          break;
      }
      i++;
  }

  for(int i=0;i<maxlength;i++)
  {

      cout<<a[i+maxst];
  }
  cout<<endl;
  cout<<"maxlength of the sentese  == "<<maxlength;

}
