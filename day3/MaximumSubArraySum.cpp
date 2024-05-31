
// cumelative sum approch
// finding the sum of  nth element


#include<iostream>
#include<limits.h>
using namespace std;
int main()
{
    int a[5]={1,-4,3,2,1};

    int maxsum=INT_MIN;
    int sum=0;
    for(int i=0;i<5;i++)
    {
        sum=0;
        for(int j=i;j<5 ;j++)
        {
            sum+=a[j];
        }
        maxsum=max(maxsum,sum);
    }

    cout<<"maximum sum == "<<maxsum;


}
