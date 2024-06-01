
#include<iostream>
#include<limits.h>
using namespace std;
int main()
{


    const  int n=1e6 + 2;
    int a[n]={0,-9,1,3,4,5};

    bool check[n];

    for(int i=0;i < n;i++)
    {
        check[i]=0;
    }


    for(int i=0;i<n;i++)
    {
        if( a[i] >= 0)
        {
            check[a[i]]= 1 ;
        }
    }

    for(int i=0;i<n;i++)
    {

        if(check[i]==false)
        {
            cout<<"missing positive number =="<<i;
            break;
        }
    }

}
