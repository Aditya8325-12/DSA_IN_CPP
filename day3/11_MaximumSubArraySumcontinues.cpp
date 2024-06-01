
#include<iostream>
#include<limits.h>
int main()
{

    int a[6]={-1,4,-6,7,5,-4};
    int csua[6];


    int maxsum=INT_MIN;
int sum=0;
    for(int i=0;i<6;i++)
    {
         sum+=a[i];
        if(sum < 0)
        {
            sum=0;
        }
        maxsum=max(maxsum,sum);
        sum=0;
    }

    cout<<"max=="<<maxsum;


}
