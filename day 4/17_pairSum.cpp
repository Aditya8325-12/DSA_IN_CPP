#include<iostream>
#include<limits.h>
using namespace std;

int main()
{

    int a[8]={2,4,7,11,14,16,20,21};

    int k=31;

    int n=7;

    for(int i=0;i<=n-1;i++)
    {
        for(int j=i+1;j<=n;j++)
        {
            if(a[i]+a[j] == k)
            {
                cout<<"v1= "<<a[i]<<" :: v2 == "<<a[j];
            }
        }
    }
}
