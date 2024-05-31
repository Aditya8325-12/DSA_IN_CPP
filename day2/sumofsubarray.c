#include<stdio.h>
int main()
{

    int a[5]={1,2,0,7,2};
      int sum=0;
      int cc=0;
    for(int i=0;i<=4;i++)
    {

        for(int j=i;j<=4;j++){
           sum=sum + a[j];
           cc++;
        }
    }

    printf("sum == %d \t cc==%d",sum,cc);
}
