#include<iostream>
using namespace std;
int main()
{

   int a[6]={12,45,23,51,19,8};


   int maxelemnt=a[0];
   for(int i=1;i<=5;i++)
   {
        if(a[i] > a[i-1])
        {
            maxelemnt=a[i];
        }
        else{
            maxelemnt=a[i-1];
        }
        if(i==1)
        {
            cout<<"max=="<<maxelemnt;
            break;
        }

   }

}
