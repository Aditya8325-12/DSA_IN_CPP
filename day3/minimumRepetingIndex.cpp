
#include<iostream>
#include<limits.h>
using namespace std;
int main()
{

    int a[7]={1,5,3,4,3,5,6};
    const int n=50;
    int minvalue=INT_MAX;
    int ai[n];

    for(int i=0;i<n;i++)
    {
        ai[i]=-1;
    }

    for(int i=0;i<=6;i++)
    {
        if( ai[a[i]]!=-1)
        {
            minvalue=min(minvalue,ai[a[i]]);
        }
        else
        {
        ai[a[i]]=i;

        }
    }


    if(minvalue ==INT_MAX)
    {
        cout<<"-1";
    }
    else
    {

        cout<<"minimum  index"<<minvalue+1;

    }



}

