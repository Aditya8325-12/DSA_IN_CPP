#include<iostream>
#include<limits.h>
using namespace std;

int kadense(int arr[],int n)
{

    int sum=0;
    int maxsum=INT_MIN;

    for(int i=0;i<n;i++)
    {
        sum+=arr[i];
        if(sum < 0)
        {
            sum=0;
        }
        maxsum=max(maxsum,sum);
    }

    return maxsum;

}

int main()
{
    int a[7]={4,-4,6,-6,10,-11,12};

    int nowwrapsum=kadense(a,7);

    int totalsum=0;
    for(int i=0;i<7;i++)
    {
        totalsum+=a[i];
        a[i]=-a[i];
    }

    int wrapsum=totalsum+ kadense(a,7);

    cout<<"maxsum of wrap and now wrap == "<<max(wrapsum,nowwrapsum);

}
