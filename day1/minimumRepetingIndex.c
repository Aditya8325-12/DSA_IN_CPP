
#include<stdio.h>
#include<limits.h>
int main()
{

    int a[7]={1,5,3,4,3,5,6};
    int ai[1e6+2];
    for(int i=0;i<1e6 + 2;i++)
    {
        ar[i]=-1;
    }

    int minvalue=INT_MAX;
    for(int i=0;i<=6;i++)
    {
        if( ai[i+1]!=-1)
        {
            minvalue=ai[i];
        }
        ai[i+1]=a[i];
    }


    printf("%d",minvalue);


}
