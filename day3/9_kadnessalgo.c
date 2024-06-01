
#include<stdio.h>
int main()
{

    int a[6]={-1,4,-6,7,5,-4};
    int csua[6];

    int sum=0;
    for(int i=0;i<6;i++)
    {

        if(a[i] <= 0)
        {
           csua[i]=0;
        }
        else{
            csua[i]=a[i];
        }

        sum += csua[i];
    }

    printf("sum ==%d",sum);


}
